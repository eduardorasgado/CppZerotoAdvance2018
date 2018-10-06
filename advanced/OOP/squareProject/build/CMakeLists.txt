cmake_minimum_required(VERSION 3.10)

project(squareProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(squareProject ../src/main.cpp
							../src/Quadrilateral.hpp
							../src/Quadrilateral.cpp)
