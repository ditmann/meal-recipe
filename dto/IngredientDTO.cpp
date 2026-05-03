//
// Created by adria on 12/11/2025.
//

#include "IngredientDTO.h"
//-----------------------contsructors---------------------------
IngredientDTO::IngredientDTO() {
    name = "noName";
    grams = 0;
    caloriesPer100Grams = 0;
    totalCalories = 0;
}
IngredientDTO::IngredientDTO(std::string name) {
    this->name = std::move(name);
    grams = 0;
    caloriesPer100Grams = 0;
    totalCalories = 0;
}
IngredientDTO::IngredientDTO(std::string name, int grams) {
    this->name = std::move(name);
    this->grams = grams;
    caloriesPer100Grams = 0;
    totalCalories = 0;
}
IngredientDTO::IngredientDTO(std::string name, int grams, int caloriesPer100Grams) {
    this->name = std::move(name);
    this->grams = grams;
    this->caloriesPer100Grams = caloriesPer100Grams;
    totalCalories = grams * caloriesPer100Grams / 100;
}
IngredientDTO::IngredientDTO(std::string name, int grams, int caloriesPer100Grams, int totalCalories) {
    this->name = std::move(name);
    this->grams = grams;
    this->caloriesPer100Grams = caloriesPer100Grams;
    this->totalCalories = totalCalories;
}

//-----------------------getters and setters------------------------
std::string IngredientDTO::getName() const {
    return name;
}
int IngredientDTO::getGrams() const{
    return grams;
}
int IngredientDTO::getCaloriesPer100Grams() const {
    return caloriesPer100Grams;
}
int IngredientDTO::getTotalCalories() const{
    return totalCalories;
}
void IngredientDTO::setName(std::string name) {
    this->name = std::move(name);
}
void IngredientDTO::setGrams(int newGrams) {
    grams = newGrams;
}
void IngredientDTO::setCaloriesPer100Grams(int newCaloriesPer100Grams) {
    caloriesPer100Grams = newCaloriesPer100Grams;
}
void IngredientDTO::setTotalCalories(int newTotalCalories) {
    totalCalories = newTotalCalories;
}

//-------------------Methods-----------------------------

std::string IngredientDTO::toString() const {
    return name;
}
