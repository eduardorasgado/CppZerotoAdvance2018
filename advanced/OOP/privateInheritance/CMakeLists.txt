cmake_minimum_required(VERSION 3.12)
project(privateInheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(privateInheritance main.cpp Vehiculo.h Turismo.h Vehiculo.cpp Turismo.cpp Deportivo.h Deportivo.cpp)