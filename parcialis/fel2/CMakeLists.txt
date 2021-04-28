cmake_minimum_required(VERSION 3.17)
project(fel2 C)

set(CMAKE_C_STANDARD 99)

add_executable(fel2 main.c function.c function.h cmake-build-debug/input.txt)