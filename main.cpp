#include <iostream>
#include "antlr4-runtime.h"
#include "gen/hostsLexer.h"
#include "gen/hostsParser.h"
#include "hosts_listener.h"

int main()
{
  antlr4::ANTLRInputStream input("   # un commento    a     b    \n127.0.0.1 mongo postgres keycloak shimmer c6ma.d.vrlpnc.com c7rd.d.vrlpnc.com\n");
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
