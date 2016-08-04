cmake_minimum_required(VERSION 3.5)
project(Odysseus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/odysseus/odysseus.h)
add_executable(Odysseus ${SOURCE_FILES})