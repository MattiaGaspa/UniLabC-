cmake_minimum_required(VERSION 3.0)
project(Lab9 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(main
        src/main.cpp
)
