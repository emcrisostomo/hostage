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
#include "hosts_parser/hosts_listener.h"
#include "hosts_parser/command_parser.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <pwd.h>
#include <ctime>
#ifdef HAVE_CMAKE_CONFIG_H
#  include "cmake_config.h"
#endif
#include "gettext/gettext_defs.h"

static const int OPT_VERSION = 128;
static const int HOSTAGE_EXIT_OK = 0;
static const std::string HOSTS_FILE = "/etc/hosts";

static bool iflag = false;
static bool oflag = false;
std::string output_file;

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
void set_command(const command& command);
std::vector<std::shared_ptr<line>> parse_hosts_and_get_entries();
void write_hosts(const std::vector<std::shared_ptr<line>>& entries);
void rm_host_command(const command& command);
std::string join_with_space(const std::vector<std::string>& vector);
void rm_address_command(const command& command);
void write_hosts_to_stream(const std::vector<std::shared_ptr<line>>& entries, std::ostream& ostream);
std::string get_output_file_path();
// Usage:
//
// hostage set   (address) (host_name)
// hostage rm    host    (host_name)+
// hostage rm    address (address)+
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
    backup_hosts_file();

    switch (cmd.command)
    {
    case hostage_command::RM_ADDRESS:
      rm_address_command(cmd);
      return 0;

    case hostage_command::RM_HOST:
      rm_host_command(cmd);
      return 0;

    case hostage_command::SET:
      set_command(cmd);
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

void
rm_address_command(const command& command)
{
  const std::vector<std::shared_ptr<line>>& entries = parse_hosts_and_get_entries();
  const std::vector<std::string>& address_to_remove = command.addresses;
  std::vector<std::shared_ptr<line>> new_entries;
  new_entries.reserve(entries.size() + 1);

  for (const auto& item : entries)
  {
    const table_entry *entry = dynamic_cast<table_entry *>(item.get());

    if (entry != nullptr
        && std::find(address_to_remove.begin(),
                     address_to_remove.end(),
                     entry->address) != address_to_remove.end())
      continue;

    new_entries.push_back(item);
  }

  write_hosts(new_entries);
}

void
rm_host_command(const command& command)
{
  const std::vector<std::shared_ptr<line>>& entries = parse_hosts_and_get_entries();
  const std::vector<std::string>& host_names_to_remove = command.host_names;
  std::vector<std::shared_ptr<line>> new_entries;
  new_entries.reserve(entries.size() + 1);

  for (const auto& item : entries)
  {
    const table_entry *entry = dynamic_cast<table_entry *>(item.get());

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
      if (std::find(host_names_to_remove.begin(),
                    host_names_to_remove.end(), name) == host_names_to_remove.end())
        filtered_host_names.push_back(name);
    }

    if (filtered_host_names.empty())
      continue;

    if (filtered_host_names.size() == entry->host_names.size())
    {
      new_entries.push_back(item);
      continue;
    }

    auto *new_entry = new table_entry();
    new_entry->address = entry->address;
    new_entry->text = entry->address + join_with_space(filtered_host_names);
    new_entry->host_names = std::move(filtered_host_names);

    new_entries.push_back(std::shared_ptr<line>(new_entry));
  }

  write_hosts(new_entries);
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
set_command(const command& command)
{
  const std::vector<std::shared_ptr<line>>& entries = parse_hosts_and_get_entries();
  const std::string& address = command.addresses.front();
  const std::string& host_name = command.host_names.front();
  std::vector<std::shared_ptr<line>> new_entries;
  new_entries.reserve(entries.size() + 1);
  bool found{false};

  for (const auto& item : entries)
  {
    new_entries.push_back(item);

    if (found)
      continue;

    const table_entry *entry = dynamic_cast<table_entry *>(item.get());

    if (entry == nullptr)
      continue;

    if (entry->address != address)
      continue;

    if (std::find(entry->host_names.begin(),
                  entry->host_names.end(),
                  host_name) == entry->host_names.end())
      continue;

    found = true;
  }

  if (!found)
  {
    auto *entry = new table_entry();
    entry->address = address;
    entry->host_names.push_back(host_name);
    entry->text = address + " " + host_name;

    new_entries.push_back(std::shared_ptr<line>(entry));
  }

  write_hosts(new_entries);
}

std::string
get_output_file_path()
{
  if (oflag)
    return output_file;
  else
    return HOSTS_FILE;
}

void
write_hosts(const std::vector<std::shared_ptr<line>>& entries)
{
  if (iflag || oflag)
  {
    const std::string& file_path = get_output_file_path();

    std::ofstream hosts_file(file_path,
                             std::ofstream::out | std::ofstream::trunc);
    write_hosts_to_stream(entries, hosts_file);
    
    if (!hosts_file)
      throw std::runtime_error(_("Cannot write: ") + file_path);
  }
  else
    write_hosts_to_stream(entries, std::cout);
}

void
write_hosts_to_stream(const std::vector<std::shared_ptr<line>>& entries,
                      std::ostream& os)
{
  for (const auto& entry : entries)
    os << entry->text << '\n';
}

std::vector<std::shared_ptr<line>>
parse_hosts_and_get_entries()
{
  std::ifstream hosts_file("/etc/hosts", std::ifstream::in);

  hosts_listener listener;
  listener.parse(hosts_file);

  return listener.get_entries();
}

void
backup_hosts_file()
{
  const std::string& backup_file_name = get_backup_filename();

  std::ifstream src("/etc/hosts", std::ios::binary);
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
  const std::string short_options = "hio:";

  int option_index = 0;
  static struct option long_options[] = {
    {"inplace",     no_argument, nullptr, 'i'},
    {"help",        no_argument, nullptr, 'h'},
    {"output-file", no_argument, nullptr, 'o'},
    {"version",     no_argument, nullptr, OPT_VERSION},
    {nullptr,       0,           nullptr, 0}
  };

  while ((ch = getopt_long(argc,
                           argv,
                           short_options.c_str(),
                           long_options,
                           &option_index)) != -1)
  {
    switch (ch)
    {
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

    case OPT_VERSION:
      print_version();
      exit(HOSTAGE_EXIT_OK);

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
  stream << "hostage" << _(" (option)+ (version)+ \n");
  stream << "\n";
  stream << _("Options:\n");
  stream << " -h, --help            " << _("Show this message.\n");
  stream << " -i, --inplace         " << _("Modify the hosts file in place.\n");
  stream << " -o, --output-file     " << _("Specify an output file path (implies -i).\n");
  stream << "     --version         " << _("Show the version.\n");
  stream << "\n";
  stream << _("See the man page for more information.\n\n");
  stream << _("Report bugs to <") << PACKAGE_BUGREPORT << ">.\n";
  stream << _("Project home page: <") << PACKAGE_URL << ">.";
  stream << "\n";
}