cmake_minimum_required(VERSION 3.10)
project(ControlUnit)

set(CMAKE_CXX_STANDARD 98)

add_executable(ControlUnit main.cpp header.h functions.cpp)