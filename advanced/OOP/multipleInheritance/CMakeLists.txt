cmake_minimum_required(VERSION 3.12)
project(multipleInheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(multipleInheritance main.cpp Barco/Barco.h Barco/Barco.cpp Avion/Avion.h Avion/Avion.cpp)