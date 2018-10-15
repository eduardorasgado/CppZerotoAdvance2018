cmake_minimum_required(VERSION 3.12)
project(sportMan)

set(CMAKE_CXX_STANDARD 14)

add_executable(sportMan main.cpp Alumno/Alumno.cpp Alumno/Alumno.h Deportista/Deportista.cpp Deportista/Deportista.h BecadoDeporte/BecadoDeporte.cpp BecadoDeporte/BecadoDeporte.h)