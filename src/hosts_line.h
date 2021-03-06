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

#ifndef HOSTAGE_HOSTS_LINE_H
#define HOSTAGE_HOSTS_LINE_H

#include <string>
#include <vector>

namespace hostage
{
  class line
  {
  public:
    virtual std::string to_string() const = 0;
    virtual ~line() = default;
  };

  class comment_line : public line
  {
  public:
    std::string to_string() const override;

    std::string comment;
  };

  class empty_line : public line
  {
    std::string to_string() const override;
  };

  class table_entry : public line
  {
  public:
    std::string to_string() const override;

    std::string address;
    std::vector<std::string> host_names;
    std::string comment;
  };
}

#endif //HOSTAGE_HOSTS_LINE_H
