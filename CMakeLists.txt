cmake_minimum_required(VERSION 3.20)
project(MR_JACK C)

set(CMAKE_C_STANDARD 99)

add_executable(MR_JACK main.c cmake-build-debug/MENU.h cmake-build-debug/MENU.c)
