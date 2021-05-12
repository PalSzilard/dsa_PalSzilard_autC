cmake_minimum_required(VERSION 3.17)
project(kupac C)

set(CMAKE_C_STANDARD 99)

add_executable(kupac main.c kupac.h kupac.c)