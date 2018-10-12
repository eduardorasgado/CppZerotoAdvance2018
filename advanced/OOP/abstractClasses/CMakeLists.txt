cmake_minimum_required(VERSION 3.12)
project(abstractClasses)

set(CMAKE_CXX_STANDARD 11)

add_executable(abstractClasses main.cpp SerVivo.h Planta.h Animal.h AnimalCarnivoro.h AnimalHervivoro.h)