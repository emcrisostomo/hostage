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
#include "antlr4-runtime.h"
#include "../gen/hosts_lexer.h"
#include "../gen/hosts.h"
#include "hosts_parser/hosts_listener.h"
#include "hosts_parser/command_listener.h"
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

  switch (cmd.command)
  {
  case hostage_command::UNSET:
    std::cerr << _("Missing or unknown command.\n");
    return 1;

  case hostage_command::SET:
    break;

  default:
    std::cerr << _("Unexpected command.\n");
    std::cerr << _("This is probably a bug.\n");
    return 2;
  }

  if (cmd.error)
  {
    std::cerr << _("Invalid command arguments.\n");
    return 4;
  }

  std::ifstream hosts_file("/etc/hosts", std::ifstream::in);

  antlr4::ANTLRInputStream input(hosts_file);
  hosts_lexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  tokens.fill();

  hosts_listener listener;
  hosts parser(&tokens);
  antlr4::tree::ParseTree *tree = parser.hosts_file();
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  return 0;
}

void
parse_opts(int argc, char **argv)
{
  int ch;
  std::string short_options = "h";

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

command parse_command(int argc, char **argv)
{
  command cmd{};

  if (optind == argc)
  {
    return cmd;
  }

  std::string command_args;
  command_args.reserve(16 * (argc - optind));

  for (size_t i = optind; i < argc; ++i)
  {
    command_args += argv[i];
    command_args += " ";
  }

  antlr4::ANTLRInputStream is(command_args);
  hosts_lexer lexer(&is);
  antlr4::CommonTokenStream tokens(&lexer);
  tokens.fill();

  hosts parser(&tokens);
  antlr4::tree::ParseTree *tree = parser.command_line();
  command_listener listener;
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  return listener.get_command();
}

void print_version()
{
  std::cout << PACKAGE_STRING << "\n";
  std::cout << "Copyright (C) 2020 Enrico M. Crisostomo <enrico.m.crisostomo@gmail.com>.\n";
  std::cout << _("License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\n");
  std::cout << _("This is free software: you are free to change and redistribute it.\n");
  std::cout << _("There is NO WARRANTY, to the extent permitted by law.\n");
  std::cout << "\n";
  std::cout << "Written by Enrico M. Crisostomo.\n";
}

void usage(std::ostream& stream)
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