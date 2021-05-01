cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(cpp_study VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(cpp_study exec.cpp)

target_include_directories(cpp_study PRIVATE /home/tarcis/workspace/c++/chapter_1)
target_include_directories(cpp_study PRIVATE /home/tarcis/workspace/c++/chapter_2)
