//
// Created by adria on 12/6/2025.
//

#include "JsonDBAdapter.h"
#include <iostream>


bool JsonDBAdapter::saveObject(const std::string& objectData) {
    std::cout << "Skriver til Json fil NOW!"<< std::endl;


    return true;
}


// Funksjonsdefinisjon for retrieveObject
std::string JsonDBAdapter::retrieveObject(const std::string& id) {
    std::cout << "JSON Adapter: Retrieving data from JSON file for ID: " << id << std::endl;

    // Simulerer at vi leser en linje fra filen og returnerer den.
    return "{ \"id\": \"" + id + "\", \"type\": \"meal\", \"name\": \"Lasagna\" }";
}


