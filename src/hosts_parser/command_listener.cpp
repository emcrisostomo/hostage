//
// Created by Enrico Maria Crisostomo on 06/03/2020.
//

#include "command_listener.h"

void command_listener::visitErrorNode(antlr4::tree::ErrorNode *node)
{
  is_error = true;
}

//void command_listener::exitSet_command(hosts::Set_commandContext *context)
//{
//  command = hostage_command::SET;
//}

void command_listener::exitAddress(hosts::AddressContext *context)
{
  addresses.push_back(context->getText());
}

void command_listener::exitHost_name(hosts::Host_nameContext *context)
{
  host_names.push_back(context->getText());
}

//void command_listener::exitRm_command(hosts::Rm_commandContext *context)
//{
//  command = hostage_command::RM_HOST;
//}

