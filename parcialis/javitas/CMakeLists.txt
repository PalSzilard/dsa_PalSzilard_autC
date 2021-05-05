cmake_minimum_required(VERSION 3.17)
project(javitas C)

set(CMAKE_C_STANDARD 99)

add_executable(javitas main.c tomb.c tomb.h sor.c sor.h)