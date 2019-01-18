cmake_minimum_required(VERSION 3.12)
project(Handout C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(Handout
        src/HW1.c
        src/production.c
        src/production.h
        src/tests.c
        src/tests.h)
