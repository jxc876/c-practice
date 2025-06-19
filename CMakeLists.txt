cmake_minimum_required(VERSION 3.31)
project(c_practice C)

set(CMAKE_C_STANDARD 11)

# Put binaries in their own folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# output for libraries & archives
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

include_directories(include)

add_executable(charsv1 src/characters/charsv1.c)
add_executable(charsv2 src/characters/charsv2.c)
add_executable(charsv3 src/characters/charsv3.c)

add_executable(say_hello
        src/headers/greeting.c
        src/headers/say_hello.c)

add_executable(fn_pointers
        src/fn_pointers/fn_pointers.c)

add_executable(charsv4
        src/characters/charsv4.c
        src/characters/v4lib.c)
