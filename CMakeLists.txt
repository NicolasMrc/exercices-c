cmake_minimum_required(VERSION 3.6)
project(Exercices)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Point.cpp Point.h Etudiant.cpp Etudiant.h)
add_executable(Exercices ${SOURCE_FILES})