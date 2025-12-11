//
// Created by adria on 12/11/2025.
//

#ifndef MEAL_RECIPE_INGREDIENT_H
#define MEAL_RECIPE_INGREDIENT_H

#include <string>


class IngredientDTO {
    private:
    std::string name;
    int grams;
    int caloriesPer100Grams;
    int totalCalories;
    public:
    IngredientDTO();
    IngredientDTO(std::string name);
    IngredientDTO(std::string name, int grams);
    IngredientDTO(std::string name, int grams, int caloriesPer100Grams);
    IngredientDTO(std::string name, int grams, int caloriesPer100Grams, int totalCalories);


    //-----------------getters and setters----------------
    int getGrams()const;        //const siden det ikke endrer på objektet
    int getCaloriesPer100Grams()const;     //const siden det ikke endrer på objektet
    int getTotalCalories()const;    //const siden det ikke endrer på objektet
    std::string getName()const;

    void setGrams(int grams);
    void setCaloriesPer100Grams(int caloriesPer100Grams);
    void setTotalCalories(int totalCalories);
    void setName(std::string name);

    //-------------------Methods-----------------------------
    std::string toString()const;

};


#endif //MEAL_RECIPE_INGREDIENT_H