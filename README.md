# `sustop`
`sudo`? How about no?

This program works like `sudo`, but it's the exact opposite of useful.
When compiling on Windows with MinGW, you must specify `-static-libgcc -static-libstdc++`.

Options:

`sustop filename` - Opens a program -- wait, never mind, it doesn't.

`sustop -s` - Grants "root" access

`sustop -v` - Prints the version number

`sustop -h` - Prints "help"

`sustop --help`- Displays this message in your command prompt/terminal

`sustop -k` - Terminates itself

`sustop -b` - Attempts to run `sustop` in the background

`sustop --install` - Installs the program
