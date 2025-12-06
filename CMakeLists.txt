cmake_minimum_required(VERSION 4.0)
project(meal_recipe)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(
        core/ports
        core/dto
        storage
)

add_executable(meal_recipe
        app/Main.cpp
        core/ports/DBPort.h
        storage/JsonDBAdapter.cpp
        storage/JsonDBAdapter.h)
