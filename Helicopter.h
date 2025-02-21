

#ifndef Helicopter_h
#define Helicopter_h

#include "AirVehicle.h"
#include <iostream>
#include <string>

class Helicopter : public AirVehicle {
private:
    int rotorCount;

public:
    Helicopter(const std::string& brand, int year, int maxAltitude, int rotorCount)
        : AirVehicle(brand, year, maxAltitude), rotorCount(rotorCount) {}

    string getInfo() override{
        return "Helicopter class:: Rotor count: " + std::to_string(rotorCount) + " meters\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
};

#endif /* Helicopter_h */
