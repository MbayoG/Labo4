cmake_minimum_required(VERSION 3.17)
project(Labo4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(Labo4 main.cpp triABulle.cpp triABulle.h afficheVector.cpp afficheVector.h genereVector.cpp genereVector.h calculs.cpp calculs.h triParSelection.cpp triParSelection.h triParInsertion.cpp triParInsertion.h)