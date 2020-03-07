//
// Created by Enrico Maria Crisostomo on 06/03/2020.
//

#ifndef HOSTAGE_HOSTS_LISTENER_H
#define HOSTAGE_HOSTS_LISTENER_H

#include "../antlr4/gen/hostsBaseListener.h"
#include <vector>
#include <string>
#include <memory>

class line
{
public:
  std::string text;
  virtual ~line() = default;
};

class table_entry : public line
{
public:
  std::string address;
  std::string host_name;
  std::vector<std::string> aliases;
  ~table_entry() override = default;
};

class hosts_listener : public hostsBaseListener
{
public:
  void enterLine(hostsParser::LineContext *context) override;
  void exitLine(hostsParser::LineContext *context) override;
  void exitComment(hostsParser::CommentContext *context) override;
  void enterTable_entry(hostsParser::Table_entryContext *context) override;
  void exitTable_entry(hostsParser::Table_entryContext *context) override;
  void exitAddress(hostsParser::AddressContext *ctx) override;
  void exitHost_name(hostsParser::Host_nameContext *context) override;
  void exitAlias(hostsParser::AliasContext *context) override;
  std::vector<std::shared_ptr<line>> get_entries() const;

private:
  std::vector<std::shared_ptr<line>> lines;
  std::shared_ptr<line> current_line;
};


#endif //HOSTAGE_HOSTS_LISTENER_H
