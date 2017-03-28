# Assignment 1.07: Parsing Monster Definitions

## Description

In this assignment, we added the ability to create "monster templates" from
a file. The file is `$HOME/.rlg327/monster_desc.txt`. We also converted
everything from C to C++.

I created two new objects to achieve this goal: `MonsterDescriptionParser` and
`MonsterTemplate`. The `MonsterDescriptionParser` parses the `monster_desc.txt`
file and constructs `MonsterTemplate` objects. These objects will be used
future projects to create `Monster` objects.

In its current state, the program will not initialize the game. Instead,
it will parse the text file, generate monster templates, and print those
monster templates back to the terminal. If you wish to play the game, you
can go in to `generate_dungeon.cpp` and modify line 201.

## Usage

Same usage as always:
`make`
`./generate_dungeon`
