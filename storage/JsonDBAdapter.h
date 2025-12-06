//
// Created by adria on 12/6/2025.
//

// JsonDBAdapter.h
#ifndef JSONDBADAPTER_H
#define JSONDBADAPTER_H

#include "DBPort.h" // Må inkludere interfacet
#include <string>
#include <iostream>
#include "RecipeDTO.h"

class JsonDBAdapter : public DBPort {
public:
    // **IMPLEMENTASJON AV KONTRAKTEN:** Må ta RecipeDTO.
    bool saveObject(const RecipeDTO& recipe) override;

    // **IMPLEMENTASJON AV KONTRAKTEN:**
    std::string retrieveObject(const std::string& id) override;
};

#endif // JSONDBADAPTER_H