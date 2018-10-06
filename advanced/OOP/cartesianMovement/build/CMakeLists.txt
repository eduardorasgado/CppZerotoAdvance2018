cmake_minimum_required(VERSION 3.10)

project(cartesianMovement)

set(CMAKE_CXX_STANDARD 14)

add_executable(cartesianMovement ../src/main.cpp
								../src/CartesianPlane.hpp
								../src/CartesianPlane.cpp)