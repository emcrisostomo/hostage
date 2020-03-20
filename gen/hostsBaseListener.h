
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "hostsListener.h"


/**
 * This class provides an empty implementation of hostsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  hostsBaseListener : public hostsListener {
public:

  virtual void enterHosts_file(hosts::Hosts_fileContext * /*ctx*/) override { }
  virtual void exitHosts_file(hosts::Hosts_fileContext * /*ctx*/) override { }

  virtual void enterLine(hosts::LineContext * /*ctx*/) override { }
  virtual void exitLine(hosts::LineContext * /*ctx*/) override { }

  virtual void enterEmpty_line(hosts::Empty_lineContext * /*ctx*/) override { }
  virtual void exitEmpty_line(hosts::Empty_lineContext * /*ctx*/) override { }

  virtual void enterTable_entry(hosts::Table_entryContext * /*ctx*/) override { }
  virtual void exitTable_entry(hosts::Table_entryContext * /*ctx*/) override { }

  virtual void enterAddress(hosts::AddressContext * /*ctx*/) override { }
  virtual void exitAddress(hosts::AddressContext * /*ctx*/) override { }

  virtual void enterIp_v4_address(hosts::Ip_v4_addressContext * /*ctx*/) override { }
  virtual void exitIp_v4_address(hosts::Ip_v4_addressContext * /*ctx*/) override { }

  virtual void enterIp_v6_address(hosts::Ip_v6_addressContext * /*ctx*/) override { }
  virtual void exitIp_v6_address(hosts::Ip_v6_addressContext * /*ctx*/) override { }

  virtual void enterH16(hosts::H16Context * /*ctx*/) override { }
  virtual void exitH16(hosts::H16Context * /*ctx*/) override { }

  virtual void enterLs32(hosts::Ls32Context * /*ctx*/) override { }
  virtual void exitLs32(hosts::Ls32Context * /*ctx*/) override { }

  virtual void enterHexdig(hosts::HexdigContext * /*ctx*/) override { }
  virtual void exitHexdig(hosts::HexdigContext * /*ctx*/) override { }

  virtual void enterDec_octet(hosts::Dec_octetContext * /*ctx*/) override { }
  virtual void exitDec_octet(hosts::Dec_octetContext * /*ctx*/) override { }

  virtual void enterDigit(hosts::DigitContext * /*ctx*/) override { }
  virtual void exitDigit(hosts::DigitContext * /*ctx*/) override { }

  virtual void enterNon_zero_digit(hosts::Non_zero_digitContext * /*ctx*/) override { }
  virtual void exitNon_zero_digit(hosts::Non_zero_digitContext * /*ctx*/) override { }

  virtual void enterHost_name(hosts::Host_nameContext * /*ctx*/) override { }
  virtual void exitHost_name(hosts::Host_nameContext * /*ctx*/) override { }

  virtual void enterIreg_name(hosts::Ireg_nameContext * /*ctx*/) override { }
  virtual void exitIreg_name(hosts::Ireg_nameContext * /*ctx*/) override { }

  virtual void enterIunreserved(hosts::IunreservedContext * /*ctx*/) override { }
  virtual void exitIunreserved(hosts::IunreservedContext * /*ctx*/) override { }

  virtual void enterAlpha(hosts::AlphaContext * /*ctx*/) override { }
  virtual void exitAlpha(hosts::AlphaContext * /*ctx*/) override { }

  virtual void enterComment(hosts::CommentContext * /*ctx*/) override { }
  virtual void exitComment(hosts::CommentContext * /*ctx*/) override { }

  virtual void enterCommand_line(hosts::Command_lineContext * /*ctx*/) override { }
  virtual void exitCommand_line(hosts::Command_lineContext * /*ctx*/) override { }

  virtual void enterList_command(hosts::List_commandContext * /*ctx*/) override { }
  virtual void exitList_command(hosts::List_commandContext * /*ctx*/) override { }

  virtual void enterSet_command(hosts::Set_commandContext * /*ctx*/) override { }
  virtual void exitSet_command(hosts::Set_commandContext * /*ctx*/) override { }

  virtual void enterPurge_command(hosts::Purge_commandContext * /*ctx*/) override { }
  virtual void exitPurge_command(hosts::Purge_commandContext * /*ctx*/) override { }

  virtual void enterRm_command(hosts::Rm_commandContext * /*ctx*/) override { }
  virtual void exitRm_command(hosts::Rm_commandContext * /*ctx*/) override { }

  virtual void enterCmd_list(hosts::Cmd_listContext * /*ctx*/) override { }
  virtual void exitCmd_list(hosts::Cmd_listContext * /*ctx*/) override { }

  virtual void enterCmd_purge(hosts::Cmd_purgeContext * /*ctx*/) override { }
  virtual void exitCmd_purge(hosts::Cmd_purgeContext * /*ctx*/) override { }

  virtual void enterCmd_rm(hosts::Cmd_rmContext * /*ctx*/) override { }
  virtual void exitCmd_rm(hosts::Cmd_rmContext * /*ctx*/) override { }

  virtual void enterCmd_set(hosts::Cmd_setContext * /*ctx*/) override { }
  virtual void exitCmd_set(hosts::Cmd_setContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

