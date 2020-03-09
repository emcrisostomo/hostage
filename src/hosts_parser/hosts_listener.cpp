//
// Created by Enrico Maria Crisostomo on 06/03/2020.
//

#include "hosts_listener.h"
#include <memory>

void
hosts_listener::exitAddress(hosts::AddressContext *context)
{
  auto te = dynamic_cast<table_entry *>(current_line.get());
  te->address = context->getText();
}

void
hosts_listener::enterLine(hosts::LineContext *context)
{
  current_line = std::make_unique<line>();
}

void
hosts_listener::enterTable_entry(hosts::Table_entryContext *context)
{
  current_line = std::make_unique<table_entry>();
}

void
hosts_listener::exitLine(hosts::LineContext *context)
{
  lines.push_back(current_line);
}

void
hosts_listener::exitComment(hosts::CommentContext *context)
{
  current_line->text = context->getText();
}

std::vector<std::shared_ptr<line>>
hosts_listener::get_entries() const
{
  return lines;
}

void
hosts_listener::exitTable_entry(hosts::Table_entryContext *context)
{
  current_line->text = context->getText();
}

void
hosts_listener::exitHost_name(hosts::Host_nameContext *context)
{
  auto te = dynamic_cast<table_entry *>(current_line.get());
  te->host_names.push_back(context->getText());
}

void hosts_listener::visitErrorNode(antlr4::tree::ErrorNode *node)
{
  std::cerr << node->getText() << "\n";
}

