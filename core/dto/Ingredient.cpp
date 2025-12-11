//
// Created by adria on 12/11/2025.
//

#include "Ingredient.h"
//-----------------------contsructors---------------------------
Ingredient::Ingredient() {
    name = "noName";
    grams = 0;
    caloriesPer100Grams = 0;
    totalCalories = 0;
}
Ingredient::Ingredient(std::string name) {
    this->name = std::move(name);
    grams = 0;
    caloriesPer100Grams = 0;
    totalCalories = 0;
}
Ingredient::Ingredient(std::string name, int grams) {
    this->name = std::move(name);
    this->grams = grams;
    caloriesPer100Grams = 0;
    totalCalories = 0;
}
Ingredient::Ingredient(std::string name, int grams, int caloriesPer100Grams) {
    this->name = std::move(name);
    this->grams = grams;
    this->caloriesPer100Grams = caloriesPer100Grams;
    totalCalories = 0;
}
Ingredient::Ingredient(std::string name, int grams, int caloriesPer100Grams, int totalCalories) {
    this->name = std::move(name);
    this->grams = grams;
    this->caloriesPer100Grams = caloriesPer100Grams;
    this->totalCalories = totalCalories;
}

//-----------------------getters and setters------------------
std::string Ingredient::getName() const {
    return name;
}
int Ingredient::getGrams() const{
    return grams;
}
int Ingredient::getCaloriesPer100Grams() const {
    return caloriesPer100Grams;
}
int Ingredient::getTotalCalories() const{
    return totalCalories;
}
void Ingredient::setName(std::string name) {
    this->name = std::move(name);
}
void Ingredient::setGrams(int newGrams) {
    grams = newGrams;
}
void Ingredient::setCaloriesPer100Grams(int newCaloriesPer100Grams) {
    caloriesPer100Grams = newCaloriesPer100Grams;
}
void Ingredient::setTotalCalories(int newTotalCalories) {
    totalCalories = newTotalCalories;
}

//-------------------Methods-----------------------------

std::string Ingredient::toString() const {
    return name;
}
