# hostage
A command line utility to programmatically edit the hosts file.

```
hostage 0.0.1-develop

Usage:
hostage (option)* (command) (command_options)*

Options:
 -f, --file            Specify the input file path.
 -h, --help            Show this message.
 -i, --inplace         Modify the hosts file in place.
     --no-comments     Suppress comment lines from the output.
     --no-empty-lines  Suppress empty lines from the output.
 -o, --output-file     Specify an output file path (implies -i).
     --version         Show the version.

Commands:
 list                       Dumps (and validates) the hosts file.
 set (address) (host_name)+ Set a host file entry with the specified contents.
 rm (address|host_name)+    Remove the specified address or host name.

See the man page for more information.

Report bugs to <enrico.m.crisostomo@gmail.com>.
Project home page: <https://github.com/emcrisostomo/hostage>.
```

Bug Reports
-----------

Bug reports can be reported as issues on the [project home page][hostage].

[hostage]: https://github.com/emcrisostomo/hostage

-----

Copyright (c) 2020 Enrico M. Crisostomo

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 3, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>.
