cmake_minimum_required(VERSION 3.31)
project(c_practice C)

set(CMAKE_C_STANDARD 11)

#include_directories(characters)
#include_directories(headers)

add_executable(charsv1 characters/charsv1.c)
add_executable(charsv2 characters/charsv2.c)
add_executable(charsv3 characters/charsv3.c)

add_executable(say_hello
        headers/greeting.c
        headers/say_hello.c)

add_executable(fn_pointers fn_pointers/fn_pointers.c)
