/*
 * Copyright (c) 2020 Enrico M. Crisostomo
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 3, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <fstream>
#include <getopt.h>
#include <algorithm>
#include "hosts.h"
#include "parser/command_parser.h"
#include <unistd.h>
#include <cstdio> // fileno()
#include <sys/stat.h>
#include <pwd.h>
#include <ctime>
#include <unordered_set>
#ifdef HAVE_CMAKE_CONFIG_H
#  include "cmake_config.h"
#endif
#include "gettext/gettext_defs.h"

static const int OPT_VERSION = 128;
static const int OPT_NO_COMMENTS = 129;
static const int OPT_NO_EMPTY_LINES = 130;
static const int HOSTAGE_EXIT_OK = 0;

static bool fflag = false;
static bool iflag = false;
static bool ncflag = false;
static bool nelflag = false;
static bool oflag = false;
static std::string input_file;
static std::string output_file;

void parse_opts(int argc, char **argv);
void print_version();
void usage(std::ostream& stream);
command parse_command(int argc, char **argv);
std::string string_from_args(int arg_start, int argc, char **argv);
command_parser parse_command_antlr(const std::string& command_args);
void backup_hosts_file();
std::string get_username();
std::string get_pwd();
std::string get_backup_filename();
void write_hosts(const std::vector<std::shared_ptr<hostage::line>>& entries);
void write_host_names(const std::unordered_set<std::string>& host_names);
std::string join_with_space(const std::vector<std::string>& vector);
std::vector<std::shared_ptr<hostage::line>>
rm_host_command(const std::vector<std::shared_ptr<hostage::line>>& entries,
                const std::unordered_set<std::string>& host_names_to_remove);
std::vector<std::shared_ptr<hostage::line>>
rm_address_command(const std::vector<std::shared_ptr<hostage::line>>& entries,
                   const std::unordered_set<std::string>& address_to_remove);
void write_hosts_to_stream(const std::vector<std::shared_ptr<hostage::line>>& entries,
                           std::ostream& ostream);
std::string get_input_file_path();
std::string get_output_file_path();
void list_command(const command& command, hostage::hosts& hosts);
void set_command(const command& command, hostage::hosts& hosts);
void get_command(const command& command, hostage::hosts& hosts);
void purge_command(const command& command, hostage::hosts& hosts);
void rm_command(const command& command, hostage::hosts& hosts);
bool is_comment(const std::shared_ptr<hostage::line>& entry);
bool is_empty_line(const std::shared_ptr<hostage::line>& entry);
hostage::hosts get_hosts_db();

int
main(int argc, char **argv)
{
  parse_opts(argc, argv);
  const auto& cmd = parse_command(argc, argv);

  if (cmd.command == hostage_command::UNSET)
  {
    std::cerr << _("Missing or unknown command.\n");
    return 1;
  }

  if (cmd.error)
  {
    std::cerr << cmd.command.ToString() << ": " << _("Invalid command arguments.\n");
    return 4;
  }

  try
  {
    hostage::hosts hosts_db = get_hosts_db();

    // TODO: backup the output file, not the input file
    backup_hosts_file();

    switch (cmd.command)
    {
    case hostage_command::LIST:
      list_command(cmd, hosts_db);
      return 0;

    case hostage_command::PURGE:
      purge_command(cmd, hosts_db);
      return 0;

    case hostage_command::SET:
      set_command(cmd, hosts_db);
      return 0;

    case hostage_command::GET:
      get_command(cmd, hosts_db);
      return 0;

    case hostage_command::RM:
      rm_command(cmd, hosts_db);
      return 0;

    case hostage_command::UNSET:
    default:
      std::cerr << _("Unexpected command.\n");
      std::cerr << _("This is probably a bug.\n");
      return 2;
    }
  }
  catch (const std::runtime_error& err)
  {
    std::cerr << err.what() << '\n';
    return 4;
  }
  catch (...)
  {
    std::cerr << _("An unknown error occurred, aborting.");
    return 8;
  }
}

hostage::hosts
get_hosts_db()
{
  if (isatty(fileno(stdin)) == 1)
    return hostage::hosts::from_file(get_input_file_path());

  assert (errno == ENOTTY);

  std::string pipe_input;
  std::string stdin_input;

  while (std::cin >> pipe_input)
    stdin_input.append(pipe_input);

  return hostage::hosts::from_string(stdin_input);
}

void
list_command(const command& command, hostage::hosts& hosts)
{
  write_hosts(hosts.get_entries());
}

void
purge_command(const command& command, hostage::hosts& hosts)
{
  const std::vector<std::shared_ptr<hostage::line>>& entries = hosts.get_entries();

  const auto& address_filtered_entries = rm_address_command(entries, command.addresses);
  const auto& all_filtered_entries = rm_host_command(address_filtered_entries, command.host_names);

  write_hosts(all_filtered_entries);
}

void
rm_command(const command& command, hostage::hosts& hosts)
{
  const std::string& address_to_match = *command.addresses.begin();
  const std::vector<std::shared_ptr<hostage::line>>& entries = hosts.get_entries();
  std::vector<std::shared_ptr<hostage::line>> filtered_entries;
  filtered_entries.reserve(entries.size());

  for (const auto& item : entries)
  {
    const hostage::table_entry *entry = dynamic_cast<hostage::table_entry *>(item.get());

    if (entry == nullptr
        || entry->address != address_to_match)
    {
      filtered_entries.push_back(item);
      continue;
    }

    std::unordered_set<std::string> host_names_to_add;
    host_names_to_add.insert(entry->host_names.begin(), entry->host_names.end());

    for (const auto& c : command.host_names)
      host_names_to_add.erase(c);

    if (!host_names_to_add.empty())
    {
      std::vector<std::string> host_names_list(host_names_to_add.begin(),
                                               host_names_to_add.end());
      auto *new_entry = new hostage::table_entry();
      new_entry->address = address_to_match;
      new_entry->host_names = std::move(host_names_list);
      new_entry->text = address_to_match + join_with_space(new_entry->host_names);

      filtered_entries.push_back(std::shared_ptr<hostage::line>(new_entry));
    }
  }

  write_hosts(filtered_entries);
}

std::vector<std::shared_ptr<hostage::line>>
rm_address_command(const std::vector<std::shared_ptr<hostage::line>>& entries,
                   const std::unordered_set<std::string>& address_to_remove)
{
  std::vector<std::shared_ptr<hostage::line>> new_entries;
  new_entries.reserve(entries.size() + 1);

  for (const auto& item : entries)
  {
    const auto *entry = dynamic_cast<hostage::table_entry *>(item.get());

    if (entry != nullptr
        && address_to_remove.find(entry->address) != address_to_remove.end())
      continue;

    new_entries.push_back(item);
  }

  return new_entries;
}

std::vector<std::shared_ptr<hostage::line>>
rm_host_command(const std::vector<std::shared_ptr<hostage::line>>& entries,
                const std::unordered_set<std::string>& host_names_to_remove)
{
  std::vector<std::shared_ptr<hostage::line>> new_entries;
  new_entries.reserve(entries.size() + 1);

  for (const auto& item : entries)
  {
    const auto *entry = dynamic_cast<hostage::table_entry *>(item.get());

    if (entry == nullptr)
    {
      new_entries.push_back(item);
      continue;
    }

    std::vector<std::string> filtered_host_names;
    // the host name search and removal process could be optimized using sets
    // but we want to generate minimal changes to the hosts file
    for (const auto& name : entry->host_names)
    {
      if (host_names_to_remove.find(name) == host_names_to_remove.end())
        filtered_host_names.push_back(name);
    }

    if (filtered_host_names.empty())
      continue;

    if (filtered_host_names.size() == entry->host_names.size())
    {
      new_entries.push_back(item);
      continue;
    }

    auto *new_entry = new hostage::table_entry();
    new_entry->address = entry->address;
    new_entry->text = entry->address + join_with_space(filtered_host_names);
    new_entry->host_names = std::move(filtered_host_names);

    new_entries.push_back(std::shared_ptr<hostage::line>(new_entry));
  }

  return new_entries;
}

std::string
join_with_space(const std::vector<std::string>& vector)
{
  std::string cat;

  for (const auto& i : vector)
  {
    cat += " ";
    cat += i;
  }

  return cat;
}

void
set_command(const command& command, hostage::hosts& hosts)
{
  const auto& entries = hosts.get_entries();
  const auto& address = *command.addresses.begin();
  std::unordered_set<std::string> host_names_to_set = command.host_names;
  std::vector<std::shared_ptr<hostage::line>> new_entries;
  new_entries.reserve(entries.size() + 1);

  for (const auto& item : entries)
  {
    new_entries.push_back(item);

    const auto *entry = dynamic_cast<hostage::table_entry *>(item.get());

    if (entry == nullptr)
      continue;

    if (entry->address != address)
      continue;

    for (const auto& n : entry->host_names)
      host_names_to_set.erase(n);
  }

  if (!host_names_to_set.empty())
  {
    auto *entry = new hostage::table_entry();
    entry->address = address;
    std::copy(host_names_to_set.begin(),
              host_names_to_set.end(),
              std::back_inserter(entry->host_names));
    entry->text = address + join_with_space(entry->host_names);

    new_entries.push_back(std::shared_ptr<hostage::line>(entry));
  }

  write_hosts(new_entries);
}

void
get_command(const command& command, hostage::hosts& hosts)
{
  write_host_names(hosts.get_host_names(*command.addresses.begin()));
}

std::string
get_default_hosts_file_path()
{
  return "/etc/hosts";
}

std::string
get_input_file_path()
{
  if (fflag)
    return input_file;
  else
    return get_default_hosts_file_path();
}

std::string
get_output_file_path()
{
  if (oflag)
    return output_file;
  else
    return get_default_hosts_file_path();
}

void
write_host_names(const std::unordered_set<std::string>& host_names)
{
  for (const auto& host_name : host_names)
    std::cout << host_name << '\n';
}

void
write_hosts(const std::vector<std::shared_ptr<hostage::line>>& entries)
{
  if (!iflag && !oflag)
  {
    write_hosts_to_stream(entries, std::cout);
    return;
  }

  const std::string& file_path = get_output_file_path();

  std::ofstream hosts_file(file_path,
                           std::ofstream::out | std::ofstream::trunc);
  write_hosts_to_stream(entries, hosts_file);

  if (!hosts_file)
    throw std::runtime_error(_("Cannot write: ") + file_path);
}

void
write_hosts_to_stream(const std::vector<std::shared_ptr<hostage::line>>& entries,
                      std::ostream& os)
{
  for (const auto& entry : entries)
  {
    if (ncflag && is_comment(entry))
      continue;

    if (nelflag && is_empty_line(entry))
      continue;

    os << entry->text << '\n';
  }
}

bool
is_comment(const std::shared_ptr<hostage::line>& entry)
{
  return (dynamic_cast<hostage::comment_line *>(entry.get()) != nullptr);
}

bool
is_empty_line(const std::shared_ptr<hostage::line>& entry)
{
  return (dynamic_cast<hostage::empty_line *>(entry.get()) != nullptr);
}

void
backup_hosts_file()
{
  const std::string& backup_file_name = get_backup_filename();
  const std::string& input_file_path = get_input_file_path();

  std::ifstream src(input_file_path, std::ios::binary);
  std::ofstream dst(backup_file_name, std::ios::binary);
  dst << src.rdbuf();
  dst.close();

  if (!dst)
    throw std::runtime_error("Cannot write: " + backup_file_name);
}

std::string
get_backup_filename()
{
  const std::string& home_dir = get_pwd();
  const std::string& hostage_user_dir = home_dir + "/.hostage";

  int ret_mkdir = mkdir(hostage_user_dir.c_str(),
                        S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH); // NOLINT(hicpp-signed-bitwise)

  if (ret_mkdir != 0 && errno != EEXIST)
    throw std::runtime_error("Cannot create: " + hostage_user_dir);

  const std::time_t& result = std::time(nullptr);
  const std::string& str_time = std::to_string(result);
  const std::string& user = get_username();

  return (hostage_user_dir + "/hosts.backup." + user + "." + str_time);
}

std::string
get_pwd()
{
  struct passwd *pw = getpwuid(getuid());
  const char *home_dir = pw->pw_dir;

  if (home_dir == nullptr)
    throw std::runtime_error(_("Cannot get home directory"));

  return home_dir;
}

std::string
get_username()
{
  std::string user("unknown");

  static char username[256] = {0};
  if (getlogin_r(username, sizeof(username)) == 0)
    user = username;

  return user;
}

void
parse_opts(int argc, char **argv)
{
  int ch;
  const std::string short_options = "f:hio:";

  int option_index = 0;
  static struct option long_options[] = {
    {"file",           required_argument, nullptr, 'f'},
    {"help",           no_argument,       nullptr, 'h'},
    {"inplace",        no_argument,       nullptr, 'i'},
    {"output-file",    required_argument, nullptr, 'o'},
    {"no-comments",    no_argument,       nullptr, OPT_NO_COMMENTS},
    {"no-empty-lines", no_argument,       nullptr, OPT_NO_EMPTY_LINES},
    {"version",        no_argument,       nullptr, OPT_VERSION},
    {nullptr, 0,                          nullptr, 0}
  };

  while ((ch = getopt_long(argc,
                           argv,
                           short_options.c_str(),
                           long_options,
                           &option_index)) != -1)
  {
    switch (ch)
    {
    case 'f':
      fflag = true;
      input_file = optarg;
      break;

    case 'h':
      usage(std::cout);
      exit(0);

    case 'i':
      iflag = true;
      break;

    case 'o':
      oflag = true;
      output_file = optarg;
      break;

    case OPT_NO_COMMENTS:
      ncflag = true;
      break;

    case OPT_VERSION:
      print_version();
      exit(HOSTAGE_EXIT_OK);

    case OPT_NO_EMPTY_LINES:
      nelflag = true;
      break;

    case '?':
      exit(1);

    default:
      usage(std::cerr);
      exit(2);
    }
  }
}

command
parse_command(int argc, char **argv)
{
  command cmd{};

  if (optind == argc)
    return cmd;

  std::string command_args = string_from_args(optind, argc, argv);
  command_parser parser = parse_command_antlr(command_args);

  return parser.get_command();
}

command_parser
parse_command_antlr(const std::string& command_args)
{
  command_parser parser;
  parser.parse(command_args);

  return parser;
}

std::string
string_from_args(int arg_start, int argc, char **argv)
{
  std::string command_args;
  command_args.reserve(16 * (argc - arg_start));

  command_args += argv[arg_start];

  for (size_t i = arg_start + 1; i < argc; ++i)
  {
    command_args += " ";
    command_args += argv[i];
  }

  return command_args;
}

void
print_version()
{
  std::cout << PACKAGE_STRING << "\n";
  std::cout << "Copyright (C) 2020 Enrico M. Crisostomo <enrico.m.crisostomo@gmail.com>.\n";
  std::cout << _("License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\n");
  std::cout << _("This is free software: you are free to change and redistribute it.\n");
  std::cout << _("There is NO WARRANTY, to the extent permitted by law.\n");
  std::cout << "\n";
  std::cout << "Written by Enrico M. Crisostomo.\n";
}

void
usage(std::ostream& stream)
{
  stream << PACKAGE_STRING << "\n\n";
  stream << _("Usage:\n");
  stream << "hostage" << _(" (option)* (command) (command_options)* \n");
  stream << "\n";
  stream << _("Options:\n");
  stream << " -f, --file            " << _("Specify the input file path.\n");
  stream << " -h, --help            " << _("Show this message.\n");
  stream << " -i, --inplace         " << _("Modify the hosts file in place.\n");
  stream << "     --no-comments     " << _("Suppress comment lines from the output.\n");
  stream << "     --no-empty-lines  " << _("Suppress empty lines from the output.\n");
  stream << " -o, --output-file     " << _("Specify an output file path (implies -i).\n");
  stream << "     --version         " << _("Show the version.\n");
  stream << "\n";
  stream << _("Commands:\n");
  stream << " list                        " << _("Dumps (and validates) the hosts file.\n");
  stream << " set (address) (host_name)+  " << _("Set a host file entry with the specified contents.\n");
  stream << " get (address)               " << _("Get the host names of the specified address.\n");
  stream << " rm (address) (host_name)+   " << _("Remove the specified entries.\n");
  stream << " purge (address|host_name)+  " << _("Remove the specified address or host name.\n");
  stream << "\n";
  stream << _("See the man page for more information.\n\n");
  stream << _("Report bugs to <") << PACKAGE_BUGREPORT << ">.\n";
  stream << _("Project home page: <") << PACKAGE_URL << ">.";
  stream << "\n";
}