# `sustop`
`sudo`? How about no?

This program works like `sudo` except it does absolutely nothing. Think of it like an extended version of [`sudont`](https://github.com/cbondurant/sudont).

Options:

`sustop filename` - Absolutely nothing

`sustop -s` - Kills your current console session

`sustop -v` - Prints the version number

`sustop -h` or `sustop --help` - Prints help

`sustop -k` - Tells you to use `sustop -s` instead

`sustop -b` - Attempts to run `sustop` in the background, but it doesn't work.
