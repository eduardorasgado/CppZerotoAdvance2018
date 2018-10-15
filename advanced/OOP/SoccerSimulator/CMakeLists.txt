cmake_minimum_required(VERSION 3.12)
project(SoccerSimulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(SoccerSimulator main.cpp Entrenador/Entrenador.cpp Entrenador/Entrenador.h Futbolista/Futbolista.cpp Futbolista/Futbolista.h Medico/Medico.cpp Medico/Medico.h Persona/Persona.cpp Persona/Persona.h)