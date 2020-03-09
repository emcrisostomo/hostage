//
// Created by Enrico Maria Crisostomo on 06/03/2020.
//

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

class command_listener : public hostsBaseListener
{
public:
  void exitAddress(hosts::AddressContext *context) override;
  void exitHost_name(hosts::Host_nameContext *context) override;
//  void exitRm_command(hosts::Rm_commandContext *context) override;
//  void exitSet_command(hosts::Set_commandContext *context) override;
  void visitErrorNode(antlr4::tree::ErrorNode *node) override;

private:
  bool is_error;
  hostage_command command;
  std::vector<std::string> addresses;
  std::vector<std::string> host_names;
};


#endif //HOSTAGE_COMMAND_LISTENER_H
