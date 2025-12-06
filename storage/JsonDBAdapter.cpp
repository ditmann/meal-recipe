//
// Created by adria on 12/6/2025.
//

#include "JsonDBAdapter.h"
#include <iostream>

// Bruker DTO-ens serialiseringsmetode for å utføre lagringen.
bool JsonDBAdapter::saveObject(const RecipeDTO& recipe) {
    // Adapteren får DTO-en, og konverterer den til formatet den trenger (JSON-streng)
    std::string jsonString = recipe.toJsonString();

    std::cout << "--- JSON ADAPTER: SAVING ---" << std::endl;
    std::cout << "Saving DTO object after serialization:" << std::endl;
    std::cout << jsonString << std::endl;
    // Her ville fstream (filskriving) eller nettverkskall vært.
    std::cout << "----------------------------" << std::endl;

    return true;
}

std::string JsonDBAdapter::retrieveObject(const std::string& id) {
    std::cout << "JSON Adapter: Retrieving mock data for ID: " << id << std::endl;

    // Returnerer en mock JSON-streng som må deserialiseres i app-laget.
    return "{ \"id\": \"" + id + "\", \"title\": \"Retrieved Casserole\" }";
}