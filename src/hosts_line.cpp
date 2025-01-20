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

#include "hosts_line.h"
#include <sstream>

namespace hostage
{
std::string
join_with_space(const std::vector<std::string>& vector)
{
  std::ostringstream cat;

  for (const auto& i : vector)
  {
    cat << " " << i;
  }

  return cat.str();
}

std::string 
to_string(const comment_line& line) 
{
  return line.comment;
}

std::string 
to_string(const table_entry& line) 
{  
  std::ostringstream oss;
  oss << line.address;
  oss << join_with_space(line.host_names);
  if (!line.comment.empty()) oss << " " << line.comment;

  return oss.str();
}

std::string 
to_string(const empty_line&) {
    return "";
}

std::string 
to_string(const line_variant& line) {
    return std::visit([](const auto& l) { return to_string(l); }, line);
}
}