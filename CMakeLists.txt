cmake_minimum_required(VERSION 3.12)
project(cpp
VERSION 20.09
LANGUAGES CXX
DESCRIPTION "Study c++ lang, and test various functions to be experts."
)

include_directories(include)

add_executable(main main.cpp src/stringstream.cpp include include/stringstream.hpp)
set_target_properties(main PROPERTIES
CXX_STANDARD 20
)