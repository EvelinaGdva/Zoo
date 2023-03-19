cmake_minimum_required(VERSION 3.23)
project(Zoo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Aliments)

add_executable(Zoo
        Aliments/Aliment.cpp
        Aliments/Aliment.h
        Aliments/Graines.cpp
        Aliments/Graines.h
        Aliments/Viande.cpp
        Aliments/Viande.h
        aigles.cpp
        aigles.h
        "coq(1).cpp"
        coq.cpp
        coq.h
        IAnimal.cpp
        IAnimal.h
        main.cpp
        poules.cpp
        poules.h
        tigres.cpp
        tigres.h
        Zoo.cpp
        Zoo.h)
