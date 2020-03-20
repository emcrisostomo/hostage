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

#include "command_parser.h"
#include "../../gen/hosts_lexer.h"

void
command_parser::parse(const std::string& command_args)
{
  cmd = {};

  antlr4::ANTLRInputStream is(command_args);
  hosts_lexer lexer(&is);
  antlr4::CommonTokenStream tokens(&lexer);
  tokens.fill();

  hosts parser(&tokens);
  parser.removeErrorListener(&antlr4::ConsoleErrorListener::INSTANCE);
  antlr4::tree::ParseTree *tree = parser.command_line();

  cmd.error = (parser.getNumberOfSyntaxErrors() > 0);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(this, tree);
}

void
command_parser::exitAddress(hosts::AddressContext *context)
{
  cmd.addresses.insert(context->getText());
}

void
command_parser::exitHost_name(hosts::Host_nameContext *context)
{
  cmd.host_names.insert(context->getText());
}

void
command_parser::exitList_command(hosts::List_commandContext *context)
{
  cmd.command = hostage_command::LIST;
}

void
command_parser::exitSet_command(hosts::Set_commandContext *context)
{
  cmd.command = hostage_command::SET;
}

void
command_parser::exitPurge_command(hosts::Purge_commandContext *context)
{
  cmd.command = hostage_command::PURGE;
}

void
command_parser::exitRm_command(hosts::Rm_commandContext *context)
{
  cmd.command = hostage_command::RM;
}

command
command_parser::get_command() const
{
  return cmd;
}

void
command_parser::visitErrorNode(antlr4::tree::ErrorNode *node)
{
  cmd.error = true;
}
