//
// Created by adria on 12/6/2025.
//

// JsonDBAdapter.h
#ifndef JSONDBADAPTER_H
#define JSONDBADAPTER_H

#include "DBPort.h" // Trenger å kjenne til basisklassen
#include <string>   // Trenger std::string


class JsonDBAdapter : public DBPort {
public:
    // **DEKLARASJON:** Vi sier at disse funksjonene eksisterer.
    bool saveObject(const std::string& objectData) override;

    std::string retrieveObject(const std::string& id) override;

    // Hvis du har små funksjoner (som en enkel getter), kan de implementeres her:

};

#endif // JSONDBADAPTER_H