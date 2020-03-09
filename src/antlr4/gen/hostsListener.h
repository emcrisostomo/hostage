
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

  virtual void enterAliases(hosts::AliasesContext *ctx) = 0;
  virtual void exitAliases(hosts::AliasesContext *ctx) = 0;

  virtual void enterAlias(hosts::AliasContext *ctx) = 0;
  virtual void exitAlias(hosts::AliasContext *ctx) = 0;

  virtual void enterIreg_name(hosts::Ireg_nameContext *ctx) = 0;
  virtual void exitIreg_name(hosts::Ireg_nameContext *ctx) = 0;

  virtual void enterIunreserved(hosts::IunreservedContext *ctx) = 0;
  virtual void exitIunreserved(hosts::IunreservedContext *ctx) = 0;

  virtual void enterAlpha(hosts::AlphaContext *ctx) = 0;
  virtual void exitAlpha(hosts::AlphaContext *ctx) = 0;

  virtual void enterComment(hosts::CommentContext *ctx) = 0;
  virtual void exitComment(hosts::CommentContext *ctx) = 0;


};

