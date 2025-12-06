//
// Created by adria on 12/6/2025.
//


#ifndef RECIPEDTO_H
#define RECIPEDTO_H

#include <string>
#include <map>
#include <vector>
#include "nlohmann/json.hpp"
#include "nlohmann/json_fwd.hpp"

// 1. Definerer strukturen for hver ingrediens.
// [mengde, kalorier_pr_100g, totale_kalorier]
using IngredientData = std::vector<int>;

// 2. Definerer den totale oppskriftsstrukturen
class RecipeDTO {
public:
    // Totale kaloriinnholdet for hele retten
    int totalCalories = 0;

    // Bruker et std::map for å lagre ingredienser:
    // Nøkkelen er ingrediensnavnet (f.eks. "pasta", "tomatsaus").
    // Verdien er listen med tall (IngredientData).
    std::map<std::string, IngredientData> ingredients;

    // Standard konstruktør
    RecipeDTO() = default;

    // Konstruktør for enkel initialisering
    RecipeDTO(int calories, std::map<std::string, IngredientData> ings)
        : totalCalories(calories), ingredients(std::move(ings)) {}

    // Du kan legge til Getters og Setters her for bedre inkapsling
    // int getTotalCalories() const { return totalCalories; }


    std::string toJsonString() const;
};

#endif // RECIPEDTO_H