cmake_minimum_required(VERSION 3.10)
project(namespaces)

set(CMAKE_CXX_STANDARD 14)
add_executable(namespaces namespaces.cpp src/Cat.h src/Cat.cpp src/Animal.h src/Animal.cpp)
