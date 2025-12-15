//
// Created by adria on 12/6/2025.
//


#ifndef RECIPEDTO_H
#define RECIPEDTO_H

#include "ingredientDTO.h"
#include <string>
#include <vector>


class RecipeDTO {
    private:
    std::string name;
    std::vector<IngredientDTO> ingredients;
    public:
    //constructors
    RecipeDTO();
    RecipeDTO(std::string name);
    RecipeDTO(std::vector<IngredientDTO> ingredients);
    RecipeDTO(std::string name, std::vector<IngredientDTO> ingredients);
    RecipeDTO(IngredientDTO ingredientNumber1);
    RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2);
    RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3);
    RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4);
    RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4, IngredientDTO ingredientNumber5);
    RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4, IngredientDTO ingredientNumber5,IngredientDTO ingredientNumber6);
    RecipeDTO(std::string name, IngredientDTO ingredientNumber1);
    RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2);
    RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3);
    RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4);
    RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4, IngredientDTO ingredientNumber5);
    RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4, IngredientDTO ingredientNumber5, IngredientDTO ingredientNumber6);
    //metods
    void addIngredient(IngredientDTO ingredient);
    void setIngredients(std::vector<IngredientDTO> ingredients);
    void setName(std::string name);
    std::string getName();
    std::vector<IngredientDTO> getIngredients();



};



#endif // RECIPEDTO_H