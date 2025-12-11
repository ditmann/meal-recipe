cmake_minimum_required(VERSION 4.0)
project(meal_recipe)

set(CMAKE_CXX_STANDARD 14)

# DEFINISJON AV INKLUDERINGSKATALOGER (Hvor kompilatoren skal lete etter .h filer)
include_directories(
        core/ports
        core/dto
        storage
        include  # NYTT: Inkluder mappen for eksterne header-only biblioteker (som json.hpp)
)

# DEFINISJON AV EXECUTABLE (Skal kun inneholde .cpp filer)
add_executable(meal_recipe
        app/Main.cpp
        storage/JsonDBAdapter.cpp
        core/dto/RecipeDTO.cpp
        core/dto/Ingredient.cpp
        core/dto/Ingredient.h)