cmake_minimum_required(VERSION 3.19)
project(fel2 C)

set(CMAKE_C_STANDARD 99)

add_executable(fel2 main.c function2.c function2.h input.txt)