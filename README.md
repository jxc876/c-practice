# About

A simple repo to practice working with the fundamentals of C and it's toolchain.

I'm using CLion as my editor, but would like to explore XCode as well.
* https://www.jetbrains.com/clion
* https://developer.apple.com/xcode/

# Folders

Each subfolder contains a specific exercise to explore a concept.

## characters

Code to extracts letters, numbers & special chars from an input string.

This exercise is interesting because C requires allocating & release memory manually.

`characters/charsv1.c` — works, but duplicates looping code
`characters/charsv2.c` — improves on v1 by using a function pointer to avoid duplication


Build:

```shell
cc charsv1.c -o charsv1
./main
```

## headers

Practicing using header files — Under Construction 🚧

Splits a function into `greting.c` & `greeting.h`
