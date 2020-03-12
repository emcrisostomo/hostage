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

#ifndef HOSTAGE_COMMAND_PARSER_H
#define HOSTAGE_COMMAND_PARSER_H

#include "../../gen/hostsBaseListener.h"
#include <vector>
#include <string>
#include <memory>
#include "../gettext/gettext_defs.h"

class hostage_command
{
public:
  enum command_value
  {
    UNSET,
    SET,
    RM_HOST,
    RM_ADDRESS
  };

  hostage_command() = default;

  constexpr hostage_command(command_value v) : value(v)
  {}

  operator command_value() const
  { return value; }

  explicit operator bool() = delete;

  std::string ToString() const
  {
    switch (value)
    {
    case UNSET:
      return "unset";

    case SET:
      return "set";

    case RM_HOST:
      return "rm host";

    case RM_ADDRESS:
      return "rm address";

    default:
      throw std::runtime_error(_("Unknown command id: ") + std::to_string(value));
    }
  }

private:
  command_value value;
};

struct command
{
  hostage_command command{hostage_command::UNSET};
  bool error;
  std::vector<std::string> addresses;
  std::vector<std::string> host_names;
};

class command_parser : public hostsBaseListener
{
public:
  void parse(const std::string& command_args);

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


#endif //HOSTAGE_COMMAND_PARSER_H
