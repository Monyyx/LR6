cmake_minimum_required(VERSION 3.29)
project(Task_1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

add_executable(Task_1
        Task_1.cpp
        functions.cpp
        functions.h
)
