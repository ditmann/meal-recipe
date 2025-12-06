cmake_minimum_required(VERSION 4.0)
project(meal_recipe)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(meal_recipe
        meal-recipe.cpp)
