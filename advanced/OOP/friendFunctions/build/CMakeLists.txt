cmake_minimum_required(VERSION 3.10)

project(friendFunctions)

set(CMAKE_CXX_STANDARD 14)

add_executable(friendFunctions ../src/main.cpp
							../src/Personaje.h
							../src/Personaje.cpp)