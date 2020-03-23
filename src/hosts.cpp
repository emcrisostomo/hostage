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

#include "hosts.h"
#include "parser/hosts_file_parser.h"
#include <fstream>
#include <sstream>
#include <algorithm>

namespace hostage
{
hosts
hosts::from_stream(std::istream& stream)
{
  hosts_file_parser parser;
  parser.parse(stream);

  hosts h;
  h.entries = parser.get_entries();

  return h;
}

hosts
hosts::from_file(const std::string& path)
{
  std::ifstream hosts_file(path, std::ifstream::in);

  return hosts::from_stream(hosts_file);
}

hosts
hosts::from_string(const std::string& contents)
{
  std::istringstream content_stream(contents);

  return hosts::from_stream(content_stream);
}

std::vector<std::shared_ptr<line>>
hosts::get_entries() const
{
  return entries;
}

std::unordered_set<std::string>
hosts::get_host_names(const std::string& address) const
{
  std::unordered_set<std::string> host_names;

  for (const auto& item : entries)
  {
    const auto *entry = dynamic_cast<hostage::table_entry *>(item.get());

    if (entry == nullptr)
      continue;

    if (entry->address != address)
      continue;

    host_names.insert(entry->host_names.begin(), entry->host_names.end());
  }

  return host_names;
}

void
hosts::purge_address(const std::string& address)
{
  auto it = entries.begin();

  while (it != entries.end())
  {
    const auto *entry = dynamic_cast<hostage::table_entry *>(it->get());

    if (entry != nullptr && entry->address == address)
      it = entries.erase(it);
    else
      ++it;
  }
}

void
hosts::purge_host_name(const std::string& host_name)
{
  auto it = entries.begin();

  while (it != entries.end())
  {
    auto *entry = dynamic_cast<hostage::table_entry *>(it->get());

    if (entry == nullptr)
    {
      ++it;
      continue;
    }

    auto& host_names = entry->host_names;
    host_names.erase(std::remove(host_names.begin(), host_names.end(), host_name),
                     host_names.end());

    if (host_names.empty())
      it = entries.erase(it);
    else
      ++it;
  }
}

void
hosts::set_host_names(const std::string& address, const std::vector<std::string>& host_names)
{
  auto host_names_to_add = host_names;
  auto it = std::unique(host_names_to_add.begin(), host_names_to_add.end());
  host_names_to_add.resize(std::distance(host_names_to_add.begin(), it));

  for (const auto& item : entries)
  {
    const auto *entry = dynamic_cast<hostage::table_entry *>(item.get());

    if (entry == nullptr)
      continue;

    if (entry->address != address)
      continue;

    for (const auto& n : entry->host_names)
      host_names_to_add.erase(std::remove(host_names_to_add.begin(), host_names_to_add.end(), n),
                              host_names_to_add.end());
  }

  if (!host_names_to_add.empty())
  {
    auto entry = std::make_shared<hostage::table_entry>();
    entry->address = address;
    entry->host_names = host_names_to_add;

    entries.push_back(entry);
  }
}
}