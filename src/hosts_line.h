/*
 * Copyright (c) 2025 Enrico M. Crisostomo
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

#ifndef HOSTAGE_HOSTS_LINE_H
#define HOSTAGE_HOSTS_LINE_H

#include <string>
#include <vector>

namespace hostage
{
  struct comment_line 
  {
    std::string comment;
  };

  struct table_entry 
  {
      std::string address;
      std::vector<std::string> host_names;
      std::string comment;
  };

  struct empty_line {};

  // Define the variant type
  using line_variant = std::variant<comment_line, table_entry, empty_line>;

  // to_string functions for each type
  std::string to_string(const comment_line& line);
  std::string to_string(const table_entry& line);
  std::string to_string(const empty_line& line);

  // to_string function for the variant
  std::string to_string(const line_variant& line);
}

#endif //HOSTAGE_HOSTS_LINE_H
