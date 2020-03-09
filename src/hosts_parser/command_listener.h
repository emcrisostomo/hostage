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

#ifndef HOSTAGE_COMMAND_LISTENER_H
#define HOSTAGE_COMMAND_LISTENER_H

#include "../../gen/hostsBaseListener.h"
#include <vector>
#include <string>
#include <memory>

enum class hostage_command
{
  UNSET,
  SET,
  RM_HOST,
  RM_ADDRESS
};

struct command
{
  hostage_command command{hostage_command::UNSET};
  bool error;
  std::vector<std::string> addresses;
  std::vector<std::string> host_names;
};

class command_listener : public hostsBaseListener
{
public:
  void exitRm_address_command(hosts::Rm_address_commandContext *context) override;
  void exitRm_host_command(hosts::Rm_host_commandContext *context) override;
  void exitSet_command(hosts::Set_commandContext *context) override;
  void exitAddress(hosts::AddressContext *context) override;
  void exitHost_name(hosts::Host_nameContext *context) override;
  void visitErrorNode(antlr4::tree::ErrorNode *node) override;
  command get_command() const;
private:
  command cmd{};
};


#endif //HOSTAGE_COMMAND_LISTENER_H
