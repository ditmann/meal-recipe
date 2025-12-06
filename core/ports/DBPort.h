//
// Created by adria on 12/6/2025.
//

#ifndef DBPORT_H
#define DBPORT_H

#include <string>
#include <vector>

class DBPort {
public:
    // Pure virtual function to save an object (e.g., a JSON string)
    // The "= 0" makes this a requirement for all derived classes.
    virtual bool saveObject(const std::string& objectData) = 0;

    // Pure virtual function to retrieve an object
    virtual std::string retrieveObject(const std::string& id) = 0;

    // Best practice: Virtual destructor for polymorphic base classes
    virtual ~DBPort() {}
};

#endif // DBPORT_H