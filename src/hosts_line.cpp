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

namespace hostage
{
std::string
join_with_space(const std::vector<std::string>& vector)
{
  std::string cat;

  for (const auto& i : vector)
  {
    cat += " ";
    cat += i;
  }

  return cat;
}

std::string
comment_line::to_string() const
{
  return comment + "";
}

std::string
empty_line::to_string() const
{
  return "";
}

std::string
table_entry::to_string() const
{
  return address + join_with_space(host_names) + " " + comment;
}

}