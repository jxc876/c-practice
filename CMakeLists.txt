cmake_minimum_required(VERSION 3.31)
project(c_practice C)

set(CMAKE_C_STANDARD 11)

include_directories(headers)

add_executable(c_practice
        headers/greeting.c
        headers/greeting.h
        headers/hello.c)
