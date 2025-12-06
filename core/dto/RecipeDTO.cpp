// core/dto/RecipeDTO.cpp

#include "RecipeDTO.h"
#include <sstream>



// MERK: nlohmann/json-biblioteket er inkludert via RecipeDTO.h

std::string RecipeDTO::toJsonString() const {
    // 1. Lager et JSON-objekt fra nlohmann/json-biblioteket
    nlohmann::json j;

    // 2. Legger til det totale kaloriinnholdet
    // Dette blir "totalkalori": 460 i JSON-formatet
    j["totalkalori"] = totalCalories;

    // 3. Konverterer C++-mappen over til JSON-objektet
    // nlohmann/json er smart nok til å automatisk konvertere
    // std::map<std::string, std::vector<int>> til JSONs tilsvarende struktur.
    // Dette skaper nøkler som "pasta" og "tomatsaus" med tilhørende tall-arrays.

    // Itererer over ingredients-mappen (std::map)
    for (const auto& pair : ingredients) {
        // pair.first er ingrediensnavnet (string)
        // pair.second er IngredientData (std::vector<int>)
        j[pair.first] = pair.second;
    }

    // 4. Konverterer det ferdige JSON-objektet (j) tilbake til en formatert streng.
    // dump(4) betyr at strengen formateres pent med 4 mellomrom i innrykk.
    return j.dump(4);
}