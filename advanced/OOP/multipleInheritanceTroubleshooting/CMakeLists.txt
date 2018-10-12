cmake_minimum_required(VERSION 3.12)
project(multipleInheritanceTroubleshooting)

set(CMAKE_CXX_STANDARD 11)

add_executable(multipleInheritanceTroubleshooting main.cpp ClaseBase1/ClaseBase1.h ClaseBase2/ClaseBase2.h ClaseDerivada/ClaseDerivada.h ClaseDerivada/ClaseDerivada.cpp ClaseBase1/ClaseBase1.cpp ClaseBase2/ClaseBase2.cpp)