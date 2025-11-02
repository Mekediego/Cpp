cmake_minimum_required(VERSION 4.0)
project(Cpp)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc -static-libstdc++")


add_executable(Cpp main.cpp
        HolaMundo.cpp
        Primerprograma.cpp)


