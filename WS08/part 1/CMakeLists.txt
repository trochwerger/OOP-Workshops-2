cmake_minimum_required(VERSION 3.27)
project(part_1)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(part_1
        element.h
        list.h
        utilities.cpp
        utilities.h
        w8_p1.cpp)
