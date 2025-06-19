# About

A simple repo to practice working with the fundamentals of C.

Each subfolder contains a specific exercise to explore a concept.

You can compile the examples using helper script:

```shell
./build.sh
```

Or manually using CMake:

```shell
mkdir build
cmake -B build .
cmake --build build
```

## characters

Code to extracts letters, numbers & special chars from an input string.

This exercise is interesting because C requires allocating & release memory manually.

- `src/characters/charsv1.c` — works, but duplicates looping code
- `src/characters/charsv2.c` — Uses a function pointer to avoid duplication
- `src/characters/charsv3.c` — Loops once, uses malloc to avoid duplication
- `src/characters/charsv4.c` — Moves code into own lib
- `include/v4lib.h` — interface for v4 

## headers

Practicing using header files

Splits a function into interface (`greeting.h`) & definition (`greting.c`)

- `include/greetings.h` — interface
- `src/headers/greeting.c` — implementation
- `src/headers/say_hello.c` — uses headers & implementations

## fn_pointers

Small program to show how function pointers work.

- `src/fn_pointers/fn_pointers.c` — Invokes functionality using a function pointer
