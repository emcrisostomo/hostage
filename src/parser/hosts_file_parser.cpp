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
hosts_file_parser::parse(std::istream& istream)
{
  lines = {};
  current_line = {};

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
hosts_file_parser::exitAddress(hosts::AddressContext *context)
{
  auto te = dynamic_cast<hostage::table_entry *>(current_line.get());
  te->address = context->getText();
}

void
hosts_file_parser::enterLine(hosts::LineContext *context)
{
  current_line = std::make_unique<hostage::line>();
}

void
hosts_file_parser::exitLine(hosts::LineContext *context)
{
  lines.push_back(current_line);
}

void
hosts_file_parser::enterTable_entry(hosts::Table_entryContext *context)
{
  current_line = std::make_unique<hostage::table_entry>();
}

void
hosts_file_parser::exitTable_entry(hosts::Table_entryContext *context)
{
  current_line->text = context->getText();
}

void
hosts_file_parser::enterComment(hosts::CommentContext *context)
{
  current_line = std::make_unique<hostage::comment_line>();
}

void
hosts_file_parser::exitComment(hosts::CommentContext *context)
{
  current_line->text = context->getText();
}

void
hosts_file_parser::enterEmpty_line(hosts::Empty_lineContext *context)
{
  current_line = std::make_unique<hostage::empty_line>();
}

std::vector<std::shared_ptr<hostage::line>>
hosts_file_parser::get_entries() const
{
  return lines;
}

void
hosts_file_parser::exitHost_name(hosts::Host_nameContext *context)
{
  auto te = dynamic_cast<hostage::table_entry *>(current_line.get());
  te->host_names.push_back(context->getText());
}

void hosts_file_parser::visitErrorNode(antlr4::tree::ErrorNode *node)
{
}
