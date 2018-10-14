cmake_minimum_required(VERSION 3.12)
project(catsAndCats)

set(CMAKE_CXX_STANDARD 14)

add_executable(catsAndCats main.cpp Mamifero/Mamifero.cpp Mamifero/Mamifero.h Felino/Felino.cpp Felino/Felino.h GatoDomestico/GatoDomestico.cpp GatoDomestico/GatoDomestico.h)