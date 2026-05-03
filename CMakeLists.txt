cmake_minimum_required(VERSION 4.0)
project(meal_recipe)

set(CMAKE_CXX_STANDARD 14)

# DEFINISJON AV INKLUDERINGSKATALOGER (Hvor kompilatoren skal lete etter .h filer)
include_directories(
        fuctions/ports
        dto
        storage
        include  # NYTT: Inkluder mappen for eksterne header-only biblioteker (som json.hpp)
)

# DEFINISJON AV EXECUTABLE (Skal kun inneholde .cpp filer)
add_executable(meal_recipe
        app/Main.cpp
        dto/RecipeDTO.cpp
        dto/IngredientDTO.cpp
        dto/IngredientDTO.h
        fuctions/Service/calculateCalories.cpp
        fuctions/Service/calculateCalories.h)