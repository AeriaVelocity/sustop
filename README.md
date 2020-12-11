# `sustop`
`sudo`? How about no?

This program works like `sudo` except it does absolutely nothing. Think of it like an extended version of [`sudont`](https://github.com/cbondurant/sudont).

Options:

`sustop filename` - Absolutely nothing

`sustop -s` - Absolutely nothing, but with a message

`sustop -v` - Prints the version number

`sustop -h` - Prints "help"

`sustop --help`- Opens this page in your browser

`sustop -k` - Terminates itself

`sustop -b` - Attempts to run `sustop` in the background, but it doesn't work.
