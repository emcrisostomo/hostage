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

#ifndef HOSTAGE_HOSTS_H
#define HOSTAGE_HOSTS_H

#include "hosts_line.h"
#include <string>
#include <unordered_set>

namespace hostage
{
class hosts
{
public:
  static hosts from_file(const std::string& path);
  static hosts from_stream(std::istream& stream);
  static hosts from_string(const std::string& contents);

  std::vector<std::shared_ptr<line>> get_entries() const;
  std::unordered_set<std::string> get_host_names(const std::string& address) const;
  void purge_address(const std::string& address);
  void purge_host_name(const std::string& host_name);

private:
  std::vector<std::shared_ptr<line>> entries;
};
}

#endif //HOSTAGE_HOSTS_H
