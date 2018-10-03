cmake_minimum_required(VERSION 3.12)
project(CompoundClasses)

set(CMAKE_CXX_STANDARD 11)

add_executable(CompoundClasses main.cpp Expediente.h Expediente.cpp Direccion.h Direccion.cpp Estudiante.h Estudiante.cpp)