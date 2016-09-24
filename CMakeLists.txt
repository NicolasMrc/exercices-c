cmake_minimum_required(VERSION 3.6)
project(Exercices)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp PointExo2.cpp PointExo2.h Etudiant.cpp Etudiant.h fonctions.cpp fonctions.h test.cpp test.h PointExo6.cpp PointExo6.h)
add_executable(Exercices ${SOURCE_FILES})