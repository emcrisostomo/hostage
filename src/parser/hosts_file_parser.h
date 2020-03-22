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

#ifndef HOSTAGE_HOSTS_FILE_PARSER_H
#define HOSTAGE_HOSTS_FILE_PARSER_H

#include "../../gen/hostsBaseListener.h"
#include "../hosts_line.h"
#include <memory>
#include <istream>

class hosts_file_parser : public hostsBaseListener
{
public:
  void parse(std::istream& istream);

  void enterLine(hosts::LineContext *context) override;
  void exitLine(hosts::LineContext *context) override;
  void enterEmpty_line(hosts::Empty_lineContext *context) override;
  void enterComment(hosts::CommentContext *context) override;
  void exitComment(hosts::CommentContext *context) override;
  void enterTable_entry(hosts::Table_entryContext *context) override;
  void exitTable_entry(hosts::Table_entryContext *context) override;
  void exitAddress(hosts::AddressContext *ctx) override;
  void exitHost_name(hosts::Host_nameContext *context) override;
  void visitErrorNode(antlr4::tree::ErrorNode *node) override;
  std::vector<std::shared_ptr<hostage::line>> get_entries() const;

private:
  std::vector<std::shared_ptr<hostage::line>> lines;
  std::shared_ptr<hostage::line> current_line;
};


#endif //HOSTAGE_HOSTS_FILE_PARSER_H
