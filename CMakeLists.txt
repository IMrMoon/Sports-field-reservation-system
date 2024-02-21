cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        User.cpp
        User.h
        Player.cpp
        Player.h
        Manager.cpp
        Manager.h
        Field.cpp
        Field.h
        Date.cpp
        Date.h
        Orders.cpp
        Orders.h)
