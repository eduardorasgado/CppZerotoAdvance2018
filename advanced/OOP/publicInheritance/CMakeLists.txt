cmake_minimum_required(VERSION 3.12)
project(publicInheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(publicInheritance main.cpp Vehiculo.h Vehiculo.cpp Turismo.h Turismo.cpp)