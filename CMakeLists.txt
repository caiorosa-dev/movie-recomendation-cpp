cmake_minimum_required(VERSION 3.25)
project(ValiFlix)

set(CMAKE_CXX_STANDARD 20)

add_executable(ValiFlix main.cpp src/utils/StaticList.h src/app.h src/enums/MovieGenre.h src/entities/Movies.h)
