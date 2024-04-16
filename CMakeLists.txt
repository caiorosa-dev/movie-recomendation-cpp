cmake_minimum_required(VERSION 3.25)
project(ValiFlix)

set(CMAKE_CXX_STANDARD 20)

add_executable(ValiFlix main.cpp src/utils/StaticList.h src/app.h src/enums/MovieGenre.h src/entities/Movies.h src/importer/MovieImporter.h src/utils/StringUtils.h src/populators/MoviesPopulator.h src/entities/Users.h src/populators/UsersPopulator.h
        src/interface/InterfaceOptionType.h
        src/interface/InterfaceInicial.h src/questioner/UsersQuestioner.h)
