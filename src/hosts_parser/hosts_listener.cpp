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

#include "hosts_listener.h"
#include "../../gen/hosts_lexer.h"
#include "../gettext/gettext_defs.h"
#include <memory>

void
hosts_listener::parse(std::istream& istream)
{
  antlr4::ANTLRInputStream input(istream);
  hosts_lexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  tokens.fill();

  hosts parser(&tokens);
  antlr4::tree::ParseTree *tree = parser.hosts_file();
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(this, tree);

  if (parser.getNumberOfSyntaxErrors() > 0)
    throw std::runtime_error(_("Cannot parse file: aborting"));
}

void
hosts_listener::exitAddress(hosts::AddressContext *context)
{
  auto te = dynamic_cast<table_entry *>(current_line.get());
  te->address = context->getText();
}

void
hosts_listener::enterLine(hosts::LineContext *context)
{
  current_line = std::make_unique<line>();
}

void
hosts_listener::enterTable_entry(hosts::Table_entryContext *context)
{
  current_line = std::make_unique<table_entry>();
}

void
hosts_listener::exitLine(hosts::LineContext *context)
{
  lines.push_back(current_line);
}

void
hosts_listener::exitComment(hosts::CommentContext *context)
{
  current_line->text = context->getText();
}

std::vector<std::shared_ptr<line>>
hosts_listener::get_entries() const
{
  return lines;
}

void
hosts_listener::exitTable_entry(hosts::Table_entryContext *context)
{
  current_line->text = context->getText();
}

void
hosts_listener::exitHost_name(hosts::Host_nameContext *context)
{
  auto te = dynamic_cast<table_entry *>(current_line.get());
  te->host_names.push_back(context->getText());
}

void hosts_listener::visitErrorNode(antlr4::tree::ErrorNode *node)
{
  std::cerr << node->getText() << "\n";
}
