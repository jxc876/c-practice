# About

A simple repo to practice working with the fundamentals of C.

Each subfolder contains a specific exercise to explore a concept.

You can compile the examples using CMake, ex:

```shell
mkdir build
cmake -B build .
cmake --build build
```

## characters

Code to extracts letters, numbers & special chars from an input string.

This exercise is interesting because C requires allocating & release memory manually.

- `characters/charsv1.c` — works, but duplicates looping code
- `characters/charsv2.c` — Uses a function pointer to avoid duplication
- `characters/charsv3.c` — Loops once, uses malloc to avoid duplication
- `characters/charsv4.c` — Moves code into own lib

## headers

Practicing using header files

Splits a function into interface (`greeting.h`) & definition (`greting.c`)

## fn_pointers

Small program to show how function pointers work.

