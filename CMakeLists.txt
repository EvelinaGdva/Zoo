cmake_minimum_required(VERSION 3.23)
project(Zoo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Aliments)

add_executable(Zoo
        Aliments/aliment.cpp
        Aliments/aliment.h
        Aliments/Graines.cpp
        Aliments/Graines.h
        Aliments/Viande.cpp
        Aliments/Viande.h
        Aigles.cpp
        Aigles.h
        Coq.cpp
        Coq.h
        IAnimal.cpp
        IAnimal.h
        main.cpp
        Poules.cpp
        Poules.h
        Tigres.cpp
        Tigres.h
        Zoo.cpp
        Zoo.h)
