
// Generated from ../src/antlr4/hosts.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "hosts.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by hosts.
 */
class  hostsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by hosts.
   */
    virtual std::any visitHosts_file(hosts::Hosts_fileContext *context) = 0;

    virtual std::any visitLine(hosts::LineContext *context) = 0;

    virtual std::any visitComment_line(hosts::Comment_lineContext *context) = 0;

    virtual std::any visitEmpty_line(hosts::Empty_lineContext *context) = 0;

    virtual std::any visitTable_entry(hosts::Table_entryContext *context) = 0;

    virtual std::any visitAddress(hosts::AddressContext *context) = 0;

    virtual std::any visitIp_v4_address(hosts::Ip_v4_addressContext *context) = 0;

    virtual std::any visitIp_v6_address(hosts::Ip_v6_addressContext *context) = 0;

    virtual std::any visitH16(hosts::H16Context *context) = 0;

    virtual std::any visitLs32(hosts::Ls32Context *context) = 0;

    virtual std::any visitHexdig(hosts::HexdigContext *context) = 0;

    virtual std::any visitDec_octet(hosts::Dec_octetContext *context) = 0;

    virtual std::any visitDigit(hosts::DigitContext *context) = 0;

    virtual std::any visitNon_zero_digit(hosts::Non_zero_digitContext *context) = 0;

    virtual std::any visitHost_name(hosts::Host_nameContext *context) = 0;

    virtual std::any visitIreg_name(hosts::Ireg_nameContext *context) = 0;

    virtual std::any visitIunreserved(hosts::IunreservedContext *context) = 0;

    virtual std::any visitAlpha(hosts::AlphaContext *context) = 0;

    virtual std::any visitComment(hosts::CommentContext *context) = 0;

    virtual std::any visitCommand_line(hosts::Command_lineContext *context) = 0;

    virtual std::any visitList_command(hosts::List_commandContext *context) = 0;

    virtual std::any visitSet_command(hosts::Set_commandContext *context) = 0;

    virtual std::any visitGet_command(hosts::Get_commandContext *context) = 0;

    virtual std::any visitPurge_command(hosts::Purge_commandContext *context) = 0;

    virtual std::any visitRm_command(hosts::Rm_commandContext *context) = 0;

    virtual std::any visitCmd_list(hosts::Cmd_listContext *context) = 0;

    virtual std::any visitCmd_purge(hosts::Cmd_purgeContext *context) = 0;

    virtual std::any visitCmd_rm(hosts::Cmd_rmContext *context) = 0;

    virtual std::any visitCmd_set(hosts::Cmd_setContext *context) = 0;

    virtual std::any visitCmd_get(hosts::Cmd_getContext *context) = 0;


};

