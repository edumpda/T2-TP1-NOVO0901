cmake_minimum_required(VERSION 3.22)
project(trabalho_01)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(trabalho_01
        dominios.cpp
        dominios.h
        entidades.cpp
        entidades.h
        interfaces.h
        main.cpp
        testes.cpp
        testes.h)
