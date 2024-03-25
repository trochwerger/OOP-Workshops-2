cmake_minimum_required(VERSION 3.27)
project(part_2)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(part_2
        element.h
        list.h
        utilities.cpp
        utilities.h
        w8_p2.cpp)
