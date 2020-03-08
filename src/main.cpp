#include <iostream>
#include <fstream>
#include <getopt.h>
#include "antlr4-runtime.h"
#include "antlr4/gen/hostsLexer.h"
#include "antlr4/gen/hostsParser.h"
#include "hosts_parser/hosts_listener.h"
#ifdef HAVE_CMAKE_CONFIG_H
#  include "cmake_config.h"
#endif
#include "gettext/gettext_defs.h"

static const int OPT_VERSION = 128;
static const int HOSTAGE_EXIT_OK = 0;

void parse_opts(int argc, char **argv);
void print_version();
void usage(std::ostream& stream);
int parse_command(int argc, char **argv);

// Usage:
//
// hostage set address host_name
// hostage rm_h  host_name
int
main(int argc, char **argv)
{
  parse_opts(argc, argv);
  int c = parse_command(argc, argv);

  switch (c)
  {
  case 0:
    break;

  case -1:
    std::cerr << _("Missing command.\n");
    return 1;

  default:
    std::cerr << _("Unexpected command: ") << c << '\n';
    std::cerr << _("This is probably a bug.\n");
    return 2;
  }

  std::ifstream hosts("/etc/hosts", std::ifstream::in);

  antlr4::ANTLRInputStream input(hosts);
  hostsLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  tokens.fill();

  hosts_listener listener;
  hostsParser parser(&tokens);
  antlr4::tree::ParseTree *tree = parser.hosts_file();
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  const auto entries = listener.get_entries();

  for (const auto& entry : entries)
    std::cout << entry->text;

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

int parse_command(int argc, char **argv)
{
  if (optind == argc)
  {
    return -1;
  }

  std::string command(argv[optind]);
  std::cout << command << '\n';

  return 0;
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