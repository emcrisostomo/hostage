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

#include "hosts_file_parser.h"
#include "../../gen/hosts_lexer.h"
#include "../gettext/gettext_defs.h"

void
hosts_file_parser::clean_state()
{
  address = {};
  host_names = {};
  comment = {};
}

void
hosts_file_parser::parse(std::istream& istream)
{
  antlr4::ANTLRInputStream input(istream);
  hosts_lexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  tokens.fill();

  if (lexer.getNumberOfSyntaxErrors() > 0)
    throw std::runtime_error(_("Error lexing file: aborting"));

  hosts parser(&tokens);
  antlr4::tree::ParseTree *tree = parser.hosts_file();
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(this, tree);

  if (parser.getNumberOfSyntaxErrors() > 0)
    throw std::runtime_error(_("Cannot parse file: aborting"));
}

void
hosts_file_parser::enterLine(hosts::LineContext *context)
{
  clean_state();
}

void
hosts_file_parser::exitComment(hosts::CommentContext *context)
{
  comment = context->getText();
}

void
hosts_file_parser::exitAddress(hosts::AddressContext *context)
{
  address = context->getText();
}

void
hosts_file_parser::exitHost_name(hosts::Host_nameContext *context)
{
  host_names.push_back(context->getText());
}

void
hosts_file_parser::exitComment_line(hosts::Comment_lineContext *context)
{
  auto cl = std::make_shared<hostage::comment_line>();
  cl->comment = std::move(comment);

  lines.push_back(cl);
}

void
hosts_file_parser::exitTable_entry(hosts::Table_entryContext *context)
{
  auto te = std::make_shared<hostage::table_entry>();
  te->address = std::move(address);
  te->host_names = std::move(host_names);
  te->comment = std::move(comment);

  lines.push_back(te);
}

void
hosts_file_parser::exitEmpty_line(hosts::Empty_lineContext *context)
{
  auto el = std::make_shared<hostage::empty_line>();

  lines.push_back(el);
}

std::vector<std::shared_ptr<hostage::line>>
hosts_file_parser::get_entries() const
{
  return lines;
}

void hosts_file_parser::visitErrorNode(antlr4::tree::ErrorNode *node)
{
}
