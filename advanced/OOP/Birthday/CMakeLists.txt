cmake_minimum_required(VERSION 3.12)
project(Birthday)

set(CMAKE_CXX_STANDARD 11)

add_executable(Birthday main.cpp DayYear.h DayYear.cpp)