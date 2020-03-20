hostage
=======

`hostage` is a command line utility to programmatically edit the host name
database, which is typically the `/etc/hosts` plain text file in many UNIX and
UNIX-like operating systems.
 
`hostage` can:

* List and validate a host file data.
* Add entries to the database.
* Remove entries from the database, by address.
* Remove entries from the database, by host name.

/etc/hosts Format
-----------------

`hostage` assumes that the host name database has the format specified by both
the Linux and BSD (including macOS) man pages:

* The file is made up of newline-separated records.
* A record has the following structure, where items are separated by any number
of blanks (spaces or tabs):

```
internet_address canonical_hostname [aliases...] 
```

The format of each item is described in the following sections.

* A `#` indicates the beginning of a comment: characters up to the end of the
line are not interpreted.

* A line containing only blank characters is ignored.

### Address format

The address can either be an IP version 4 or an IP version 6 address.
The textual representation of an IP version 4 address is the usual dotted octet
format (e.g.: 192.168.1.10), while the textual representation of an IP version
6 address is the eight colon (`:`) separated 16-bit hexadecimal numbers.

The parser implemented in `hostage` essentially uses the ABNF grammars specified
by the [Textual Representation of IPv4 and IPv6 Addresses] IETF draft.

```
IPv4address = d8 "." d8 "." d8 "." d8

        d8          = DIGIT               ; 0-9
                    / %x31-39 DIGIT       ; 10-99
                    / "1" 2DIGIT          ; 100-199
                    / "2" %x30-34 DIGIT   ; 200-249
                    / "25" %x30-35        ; 250-255

IPv6address =                          6(h16 ":") ls32
                    /                     "::" 5(h16 ":") ls32
                    / [             h16 ] "::" 4(h16 ":") ls32
                    / [ *1(h16 ":") h16 ] "::" 3(h16 ":") ls32
                    / [ *2(h16 ":") h16 ] "::" 2(h16 ":") ls32
                    / [ *3(h16 ":") h16 ] "::"   h16 ":"  ls32
                    / [ *4(h16 ":") h16 ] "::"            ls32
                    / [ *5(h16 ":") h16 ] "::"             h16
                    / [ *6(h16 ":") h16 ] "::"

        ls32        = h16 ":" h16 / IPv4address

        h16         = 1*4HEXDIG
```  

### Host name format

The host name format has been initially specified by
[RFC 952: DOD INTERNET HOST TABLE SPECIFICATION], and later updated by
[RFC 1123: Requirements for Internet Hosts -- Application and Support].

## The host name database file location

`hostage` assumes the host name database file is located at `/etc/hosts`, but
its location can be overridden using the `-f, --file` option:

```shell script
$ hostage -f ${HOME}/my-hosts ...
```

In-place host name database file update
---------------------------------------

`hostage` write its output to the standard output by default, unless the
`-i, --inplace` option is specified, in which case `hostage` would write to its
[output location](#output-location).

## Output location

The output location is, by default, `/etc/hosts`, but it can be overridden using
the `-o, --output-file` option:
  
```shell script
$ hostage -o ${HOME}/my-hosts ...
```

It's important to note that the `-i` and the `-o` option are _independent_:
even though their default value is `/etc/hosts`, each one overrides a
_different_ setting.  The following command:

```shell script
$ hostage -i ${HOME}/my-hosts add ...
```

would read data from `${HOME}/my-hosts`, but would update the file at
`/etc/hosts`.

Listing and validating a host name database file
------------------------------------------------

The `list` command can be used to list the host name database file and validate
it:

```shell script
$ hostage list
```

Adding entries to the host name database file
---------------------------------------------

The `set` command can be used to add entries to the host name database file:

```shell script
$ hostage set (address) (host_name)+ 
```

The `set` command parses the host name database file and sets the provided
host name files for the specified address:

* If the address is not present, a new entry is created.
* If the address is already present, a new entry is created containing the
provided list of host names, _except_ those that had already been specified for
the same address.

Removing addresses or host names
--------------------------------

The `rm` command can be used to either remove entries for an address, or host
names for any address:

```shell script
$ hostage rm (address|host_name)+
```

The `rm` command parses the host name database file and removes entries using
the following algorithm:

* If the entry belongs to a specified address, then the entry is removed.
* If the entry contains a specified host name, then the entry is removed.

This command does _not_ remove `(address, host_name)` tuples.

Removing empty lines and comments from the output
-------------------------------------------------

`hostage` ignores empty lines and comments when processing a host name database
file contents, but still emits them to the output.  This behaviour guarantees
minimal changes are applied when editing the hosts file.  Users, however, may
prefer to suppress empty lines and comments from the output when
programmatically generating or editing a hosts file.  This behaviour can be
turned on using the `--no-comments` and `--no-empty-lines` options.

Backups
-------

`hostage` creates a backup copy of the output file and saves it to the
`${HOME}/.hostage` directory as `hosts.backup.${USER}.timestamp`, where
`timestamp` is the UNIX time.

Syntax
------

```
hostage 0.0.1

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

Dependencies
------------

`hostage` requires the [ANTLR4 runtime for C++], which can be easily built from
sources, or installed from a package management system for your OS, if available.

On macOS, you can easily install the ANTLR4 runtime for C++ using [MacPorts]:

```shell script
$ port install antlr4-cpp-runtime
```

Installation
------------

`hostage` can be built from sources using CMake, or installed from a package
management system for your OS, if available.

Bug Reports
-----------

Bug reports can be reported as issues on the [project home page][hostage].

[hostage]: https://github.com/emcrisostomo/hostage
[ANTLR4 runtime for C++]: https://github.com/antlr/antlr4/tree/master/runtime/Cpp
[MacPorts]: https://www.macports.org/
[RFC 952: DOD INTERNET HOST TABLE SPECIFICATION]: https://tools.ietf.org/html/rfc952
[Textual Representation of IPv4 and IPv6 Addresses]: https://tools.ietf.org/html/draft-main-ipaddr-text-rep-00
[RFC 1123: Requirements for Internet Hosts -- Application and Support]: https://tools.ietf.org/html/rfc1123

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
