cmake_minimum_required(VERSION 3.26)
project(cpp_test)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_test src/main.cpp
        src/headers/person.h
        src/person.cpp
)
