# C_Project_Word_Completion


# Avinash-Word-Completion

Word Completion takes the database and scheme as input and prints matching strings on the console.

usage: wcomp -f file -s scheme word
<file> contains lookup strings
<scheme> can be strict, pattern, fuzzy
<word> to look for in strings

Scheme	Description
Strict	Matches string from the beginning
Pattern	Matches for any occurrences of word anywhere in the string
Fuzzy loop up matches for a sequence of characters from the word in the string
There should be a module for each scheme. A module consists of a .h and .c file, where .h has declarations and .c has implementations.

Each module should provide 2 API
Loads database
Takes file as input and returns an optimized database for lookup

Lookup
Searches the database for the word and returns an array of strings found or NULL

Examples
For a database file database that contains:

This is a string.
Another line with the string.
Just a simple line.

strict scheme
Word Completion -f database -s strict "This"
This is a string.

pattern scheme
Word Completion -f database -s pattern "string"
This is a string.
Another line with the string.

fuzzy scheme
Word Completion -f database -s fuzzy "si"
This is a string.
Another line with the string.
