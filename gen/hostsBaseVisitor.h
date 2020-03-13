
// Generated from /Users/enrico/repos/github/hostage/src/antlr4/hosts.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "hostsVisitor.h"


/**
 * This class provides an empty implementation of hostsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  hostsBaseVisitor : public hostsVisitor {
public:

  virtual antlrcpp::Any visitHosts_file(hosts::Hosts_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine(hosts::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_line(hosts::Empty_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_entry(hosts::Table_entryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddress(hosts::AddressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIp_v4_address(hosts::Ip_v4_addressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIp_v6_address(hosts::Ip_v6_addressContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitH16(hosts::H16Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLs32(hosts::Ls32Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexdig(hosts::HexdigContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec_octet(hosts::Dec_octetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDigit(hosts::DigitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon_zero_digit(hosts::Non_zero_digitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHost_name(hosts::Host_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIreg_name(hosts::Ireg_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIunreserved(hosts::IunreservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlpha(hosts::AlphaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment(hosts::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand_line(hosts::Command_lineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_command(hosts::List_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_command(hosts::Set_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRm_host_command(hosts::Rm_host_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRm_address_command(hosts::Rm_address_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmd_list(hosts::Cmd_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmd_rm(hosts::Cmd_rmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmd_host(hosts::Cmd_hostContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmd_set(hosts::Cmd_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmd_address(hosts::Cmd_addressContext *ctx) override {
    return visitChildren(ctx);
  }


};

