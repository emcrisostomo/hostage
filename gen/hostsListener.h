
// Generated from /Users/enrico.m.crisostomo/repos/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "hosts.h"


/**
 * This interface defines an abstract listener for a parse tree produced by hosts.
 */
class  hostsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterHosts_file(hosts::Hosts_fileContext *ctx) = 0;
  virtual void exitHosts_file(hosts::Hosts_fileContext *ctx) = 0;

  virtual void enterLine(hosts::LineContext *ctx) = 0;
  virtual void exitLine(hosts::LineContext *ctx) = 0;

  virtual void enterEmpty_line(hosts::Empty_lineContext *ctx) = 0;
  virtual void exitEmpty_line(hosts::Empty_lineContext *ctx) = 0;

  virtual void enterTable_entry(hosts::Table_entryContext *ctx) = 0;
  virtual void exitTable_entry(hosts::Table_entryContext *ctx) = 0;

  virtual void enterAddress(hosts::AddressContext *ctx) = 0;
  virtual void exitAddress(hosts::AddressContext *ctx) = 0;

  virtual void enterIp_v4_address(hosts::Ip_v4_addressContext *ctx) = 0;
  virtual void exitIp_v4_address(hosts::Ip_v4_addressContext *ctx) = 0;

  virtual void enterIp_v6_address(hosts::Ip_v6_addressContext *ctx) = 0;
  virtual void exitIp_v6_address(hosts::Ip_v6_addressContext *ctx) = 0;

  virtual void enterH16(hosts::H16Context *ctx) = 0;
  virtual void exitH16(hosts::H16Context *ctx) = 0;

  virtual void enterLs32(hosts::Ls32Context *ctx) = 0;
  virtual void exitLs32(hosts::Ls32Context *ctx) = 0;

  virtual void enterHexdig(hosts::HexdigContext *ctx) = 0;
  virtual void exitHexdig(hosts::HexdigContext *ctx) = 0;

  virtual void enterDec_octet(hosts::Dec_octetContext *ctx) = 0;
  virtual void exitDec_octet(hosts::Dec_octetContext *ctx) = 0;

  virtual void enterDigit(hosts::DigitContext *ctx) = 0;
  virtual void exitDigit(hosts::DigitContext *ctx) = 0;

  virtual void enterNon_zero_digit(hosts::Non_zero_digitContext *ctx) = 0;
  virtual void exitNon_zero_digit(hosts::Non_zero_digitContext *ctx) = 0;

  virtual void enterHost_name(hosts::Host_nameContext *ctx) = 0;
  virtual void exitHost_name(hosts::Host_nameContext *ctx) = 0;

  virtual void enterIreg_name(hosts::Ireg_nameContext *ctx) = 0;
  virtual void exitIreg_name(hosts::Ireg_nameContext *ctx) = 0;

  virtual void enterIunreserved(hosts::IunreservedContext *ctx) = 0;
  virtual void exitIunreserved(hosts::IunreservedContext *ctx) = 0;

  virtual void enterAlpha(hosts::AlphaContext *ctx) = 0;
  virtual void exitAlpha(hosts::AlphaContext *ctx) = 0;

  virtual void enterComment(hosts::CommentContext *ctx) = 0;
  virtual void exitComment(hosts::CommentContext *ctx) = 0;

  virtual void enterCommand_line(hosts::Command_lineContext *ctx) = 0;
  virtual void exitCommand_line(hosts::Command_lineContext *ctx) = 0;

  virtual void enterList_command(hosts::List_commandContext *ctx) = 0;
  virtual void exitList_command(hosts::List_commandContext *ctx) = 0;

  virtual void enterSet_command(hosts::Set_commandContext *ctx) = 0;
  virtual void exitSet_command(hosts::Set_commandContext *ctx) = 0;

  virtual void enterGet_command(hosts::Get_commandContext *ctx) = 0;
  virtual void exitGet_command(hosts::Get_commandContext *ctx) = 0;

  virtual void enterPurge_command(hosts::Purge_commandContext *ctx) = 0;
  virtual void exitPurge_command(hosts::Purge_commandContext *ctx) = 0;

  virtual void enterRm_command(hosts::Rm_commandContext *ctx) = 0;
  virtual void exitRm_command(hosts::Rm_commandContext *ctx) = 0;

  virtual void enterCmd_list(hosts::Cmd_listContext *ctx) = 0;
  virtual void exitCmd_list(hosts::Cmd_listContext *ctx) = 0;

  virtual void enterCmd_purge(hosts::Cmd_purgeContext *ctx) = 0;
  virtual void exitCmd_purge(hosts::Cmd_purgeContext *ctx) = 0;

  virtual void enterCmd_rm(hosts::Cmd_rmContext *ctx) = 0;
  virtual void exitCmd_rm(hosts::Cmd_rmContext *ctx) = 0;

  virtual void enterCmd_set(hosts::Cmd_setContext *ctx) = 0;
  virtual void exitCmd_set(hosts::Cmd_setContext *ctx) = 0;

  virtual void enterCmd_get(hosts::Cmd_getContext *ctx) = 0;
  virtual void exitCmd_get(hosts::Cmd_getContext *ctx) = 0;


};

