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

#include "command_listener.h"

void command_listener::exitAddress(hosts::AddressContext *context)
{
  cmd.addresses.push_back(context->getText());
}

void command_listener::exitHost_name(hosts::Host_nameContext *context)
{
  cmd.host_names.push_back(context->getText());
}

void command_listener::exitRm_host_command(hosts::Rm_host_commandContext *context)
{
  cmd.command = hostage_command::RM_HOST;
}

void command_listener::exitRm_address_command(hosts::Rm_address_commandContext *context)
{
  cmd.command = hostage_command::RM_ADDRESS;
}

void command_listener::exitSet_command(hosts::Set_commandContext *context)
{
  cmd.command = hostage_command::SET;
}

command command_listener::get_command() const
{
  return cmd;
}

void command_listener::visitErrorNode(antlr4::tree::ErrorNode *node)
{
  cmd.error = true;
}

command_listener::command_listener(bool error)
{
  cmd.error = error;
}
