// app/meal-recipe.cpp
#include <iostream>  // Nødvendig for å bruke standard output (std::cout)
#include <memory>    // Nødvendig for å bruke smarte pekere som std::unique_ptr
#include "JsonDBAdapter.h" // Inkluderer den konkrete implementasjonsklassen.
                                     // Merk stien: "../" går opp ett nivå fra 'app' for å finne 'storage'.

int main() {
    // ------------------------------------------------------------------------------------------
    // MINNEHÅNDTERING & POLYMORFISME
    // ------------------------------------------------------------------------------------------
    
    // std::unique_ptr: En smart peker som automatisk frigjør minnet når 'dbService' går ut av omfanget.
    // <DBPort>: Variabelen er erklært som interfacet (basisklassen). Dette er polymorfisme.
    // std::make_unique<JsonDBAdapter>(): Allokerer minne for den konkrete adapteren (implementasjonen)
    //                                   på heapen, men pekeren behandles som en DBPort.

    std::unique_ptr<DBPort> dbService = std::make_unique<JsonDBAdapter>();
    
    // ------------------------------------------------------------------------------------------
    // DATA
    // ------------------------------------------------------------------------------------------
    
    // std::string: Standard C++-klassen for strenger (tilsvarende Java String).
    std::string newRecipe = "{\"title\":\"Pancakes\"}";

    // ------------------------------------------------------------------------------------------
    // BRUK AV INTERFACET (Dynamisk Dispatch)
    // ------------------------------------------------------------------------------------------
    
    // dbService->saveObject(): Kaller metoden via pekeren ('->'). 
    //                         Siden 'saveObject' er virtuell, kjører den riktige metoden
    //                         (JsonDBAdapter::saveObject) ved kjøretid.

    dbService->saveObject(newRecipe);

    // Kaller hentemetoden og lagrer resultatet i en ny strengvariabel.
    std::string retrievedData = dbService->retrieveObject("789");
    
    // std::cout: Skriver ut til konsollen. '<<' er innsettingsoperatoren.
    std::cout << "App Logic received: " << retrievedData << std::endl;

    // ------------------------------------------------------------------------------------------
    // OPPRYDNING
    // ------------------------------------------------------------------------------------------
    
    // return 0: Signaliserer vellykket programutførelse.
    // Når programmet forlater 'main' og 'dbService' går ut av omfang,
    // kaller std::unique_ptr automatisk delete på det allokerte minnet.
    return 0;
}