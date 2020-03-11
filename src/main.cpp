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
#include "antlr4-runtime.h"
#include "../gen/hosts_lexer.h"
#include "../gen/hosts.h"
#include "hosts_parser/hosts_listener.h"
#include "hosts_parser/command_listener.h"
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

void parse_opts(int argc, char **argv);
void print_version();
void usage(std::ostream& stream);
command parse_command(int argc, char **argv);
std::string string_from_args(int arg_start, int argc, char **argv);
command_listener parse_command_antlr(const std::string& command_args);
void backup_hosts_file();
std::string get_username();
std::string get_pwd();
std::string get_backup_filename();
void set_command(const command& command);
hosts_listener parse_hosts();
void write_hosts(const std::vector<std::shared_ptr<line>>& entries);
void rm_host_command(const command& command);
std::string concatenate(const std::vector<std::string>& vector);

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

  backup_hosts_file();

  switch (cmd.command)
  {
  case hostage_command::RM_ADDRESS:
    throw std::runtime_error("Not implemented");

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

void
rm_host_command(const command& command)
{
  const hosts_listener& listener = parse_hosts();
  const std::vector<std::shared_ptr<line>>& entries = listener.get_entries();
  const std::vector<std::string> host_names_to_remove = command.host_names;
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
    new_entry->text = entry->address + concatenate(filtered_host_names);
    new_entry->host_names = std::move(filtered_host_names);

    new_entries.push_back(std::shared_ptr<line>(new_entry));
  }

  write_hosts(new_entries);
}

std::string
concatenate(const std::vector<std::string>& vector)
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
  const hosts_listener& listener = parse_hosts();
  const std::vector<std::shared_ptr<line>>& entries = listener.get_entries();
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

void
write_hosts(const std::vector<std::shared_ptr<line>>& entries)
{
  for (const auto& entry : entries)
    std::cout << entry->text << '\n';
}

hosts_listener
parse_hosts()
{
  std::ifstream hosts_file("/etc/hosts", std::ifstream::in);

  antlr4::ANTLRInputStream input(hosts_file);
  hosts_lexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  tokens.fill();

  hosts_listener listener;
  hosts parser(&tokens);
  antlr4::tree::ParseTree *tree = parser.hosts_file();
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  if (parser.getNumberOfSyntaxErrors() > 0)
    throw std::runtime_error(_("Cannot parse file: aborting"));

  return listener;
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
  const std::string& user = get_username();
  const std::string& home_dir = get_pwd();
  const std::string& hostage_user_dir = home_dir + "/.hostage";

  int ret_mkdir = mkdir(hostage_user_dir.c_str(),
                        S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH); // NOLINT(hicpp-signed-bitwise)

  if (ret_mkdir != 0 && errno != EEXIST)
    throw std::runtime_error("Cannot create: " + hostage_user_dir);

  const std::time_t& result = std::time(nullptr);
  const std::string& str_time = std::to_string(result);

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
  const std::string short_options = "h";

  int option_index = 0;
  static struct option long_options[] = {
    {"help",    no_argument, nullptr, 'h'},
    {"version", no_argument, nullptr, OPT_VERSION},
    {nullptr, 0,             nullptr, 0}
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
  command_listener listener = parse_command_antlr(command_args);

  return listener.get_command();
}

command_listener
parse_command_antlr(const std::string& command_args)
{
  antlr4::ANTLRInputStream is(command_args);
  hosts_lexer lexer(&is);
  antlr4::CommonTokenStream tokens(&lexer);
  tokens.fill();

  hosts parser(&tokens);
  parser.removeErrorListener(&antlr4::ConsoleErrorListener::INSTANCE);
  antlr4::tree::ParseTree *tree = parser.command_line();

  command_listener listener(parser.getNumberOfSyntaxErrors() > 0);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  return listener;
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
  stream << "     --version         " << _("Show the version.\n");
  stream << "\n";
  stream << _("See the man page for more information.\n\n");
  stream << _("Report bugs to <") << PACKAGE_BUGREPORT << ">.\n";
  stream << _("Project home page: <") << PACKAGE_URL << ">.";
  stream << "\n";
}