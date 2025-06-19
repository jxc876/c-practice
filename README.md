# About

A simple repo to practice working with the fundamentals of C.

For my editor I'm using CLion, but hoping to explore XCode as well.
* https://www.jetbrains.com/clion
* https://developer.apple.com/xcode

Each subfolder contains a specific exercise to explore a concept.

You can build the programs using CMake, ex:

```shell
mkdir build
cmake -B build .
cmake --build build
```

## characters

Code to extracts letters, numbers & special chars from an input string.

This exercise is interesting because C requires allocating & release memory manually.

- `characters/charsv1.c` — works, but duplicates looping code
- `characters/charsv2.c` — improves on v1 by using a function pointer to avoid duplication
- `characters/charsv3.c` — improves on v2, loops once, uses malloc to avoid duplication

## headers

Practicing using header files

Splits a function into interface (`greeting.h`) & definition (`greting.c`)

## fn_pointers

Small program to show how function pointers work.

