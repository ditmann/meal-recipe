#include <iostream>
#include <memory>
#include "JsonDBAdapter.h" // Inkluderer den konkrete adapteren

// Funksjon som demonstrerer bruken av DTO og adapter
void runRecipeApp() {
    // 1. Bygg DTO-data (som i ditt eksempel "pastabolones")
    IngredientData pastaData = {100, 360, 360}; // [Mengde, Kalorier/100g, Totalt Kalorier]
    IngredientData tomatoSauceData = {200, 50, 100};

    std::map<std::string, IngredientData> ingredients;
    ingredients["pasta"] = pastaData;
    ingredients["tomatsaus"] = tomatoSauceData;

    // 2. Lag DTO-objektet som skal serialiseres
    RecipeDTO pastabolones(460, std::move(ingredients));

    // 3. Bruker polymorfisme og smart peker: dbService er en DBPort* som peker på en JsonDBAdapter
    std::unique_ptr<DBPort> dbService = std::make_unique<JsonDBAdapter>();

    std::cout << "--- Starting Recipe Service ---" << std::endl;

    // 4. Bruker interfacet til å lagre DTO-objektet
    if (dbService->saveObject(pastabolones)) {
        std::cout << "Saving completed successfully!" << std::endl;
    }

    std::cout << "\nAttempting to retrieve data..." << std::endl;

    // 5. Bruker interfacet til å hente data
    std::string retrievedData = dbService->retrieveObject("999");

    std::cout << "App received raw JSON data: " << retrievedData << std::endl;
    std::cout << "-------------------------------" << std::endl;
}


int main() {
    runRecipeApp();

    return 0;
    // std::unique_ptr frigjør automatisk minnet her.
}