// core/dto/RecipeDTO.cpp

#include "RecipeDTO.h"


//Constructors Overloaded to be able to add mulitple at once
RecipeDTO::RecipeDTO() {
    name = "noName";
}
RecipeDTO::RecipeDTO(std::string name) {
    this->name = std::move(name);
}
RecipeDTO::RecipeDTO(std::vector<IngredientDTO> ingredients) {
    this->ingredients = std::move(ingredients);
}
RecipeDTO::RecipeDTO(std::string name, std::vector<IngredientDTO> ingredients) {
    this->name = std::move(name);
    this->ingredients = std::move(ingredients);
}
RecipeDTO::RecipeDTO(IngredientDTO ingredientNumber1) {
    name = "noName";
    ingredients[0] = std::move(ingredientNumber1);
}
RecipeDTO::RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2) {
    name = "noName";
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3) {
    name = "noName";
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2), std::move(ingredientNumber3)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4) {
    name = "noName";
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2), std::move(ingredientNumber3), std::move(ingredientNumber4)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4, IngredientDTO ingredientNumber5) {
    name = "noName";
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2), std::move(ingredientNumber3), std::move(ingredientNumber4), std::move(ingredientNumber5)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4, IngredientDTO ingredientNumber5, IngredientDTO ingredientNumber6) {
    name = "noName";
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2), std::move(ingredientNumber3), std::move(ingredientNumber4), std::move(ingredientNumber5), std::move(ingredientNumber6)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4, IngredientDTO ingredientNumber5) {
    this->name = std::move(name);
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2), std::move(ingredientNumber3), std::move(ingredientNumber4), std::move(ingredientNumber5)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(std::string name, IngredientDTO ingredientNumber1) {
    this->name = std::move(name);
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2) {
    this->name = std::move(name);
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3) {
    this->name = std::move(name);
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2), std::move(ingredientNumber3)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4) {
    this->name = std::move(name);
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2), std::move(ingredientNumber3), std::move(ingredientNumber4)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}
RecipeDTO::RecipeDTO(std::string name, IngredientDTO ingredientNumber1, IngredientDTO ingredientNumber2, IngredientDTO ingredientNumber3, IngredientDTO ingredientNumber4, IngredientDTO ingredientNumber5, IngredientDTO ingredientNumber6) {
    this->name = std::move(name);
    std::vector<IngredientDTO> tempVectorIngredientDTO = {std::move(ingredientNumber1), std::move(ingredientNumber2), std::move(ingredientNumber3), std::move(ingredientNumber4), std::move(ingredientNumber5), std::move(ingredientNumber6)};
    this->ingredients = std::move(tempVectorIngredientDTO);
}

//-------------------------Getter/setter----------------------------
void RecipeDTO::addIngredient(IngredientDTO ingredient) {
    ingredients.push_back(std::move(ingredient));
}
void RecipeDTO::setName(std::string name) {
    this->name = std::move(name);
}
void RecipeDTO::setIngredients(std::vector<IngredientDTO> ingredients) {
    this->ingredients = std::move(ingredients);
}
std::vector<IngredientDTO> RecipeDTO::getIngredients() {
    return this->ingredients;
}
std::string RecipeDTO::getName() {
    return this->name;
}

//-------------------------Methods--------------------------------------
void calculateTotalCalories()
{

}
