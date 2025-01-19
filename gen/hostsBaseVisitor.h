
// Generated from ../src/antlr4/hosts.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "hostsVisitor.h"


/**
 * This class provides an empty implementation of hostsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  hostsBaseVisitor : public hostsVisitor {
public:

  virtual std::any visitHosts_file(hosts::Hosts_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine(hosts::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComment_line(hosts::Comment_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmpty_line(hosts::Empty_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_entry(hosts::Table_entryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddress(hosts::AddressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIp_v4_address(hosts::Ip_v4_addressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIp_v6_address(hosts::Ip_v6_addressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitH16(hosts::H16Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLs32(hosts::Ls32Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHexdig(hosts::HexdigContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDec_octet(hosts::Dec_octetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDigit(hosts::DigitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNon_zero_digit(hosts::Non_zero_digitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHost_name(hosts::Host_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIreg_name(hosts::Ireg_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIunreserved(hosts::IunreservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlpha(hosts::AlphaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComment(hosts::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommand_line(hosts::Command_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList_command(hosts::List_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_command(hosts::Set_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGet_command(hosts::Get_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPurge_command(hosts::Purge_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRm_command(hosts::Rm_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmd_list(hosts::Cmd_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmd_purge(hosts::Cmd_purgeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmd_rm(hosts::Cmd_rmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmd_set(hosts::Cmd_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCmd_get(hosts::Cmd_getContext *ctx) override {
    return visitChildren(ctx);
  }


};

