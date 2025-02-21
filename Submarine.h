

#ifndef Submarine_h
#define Submarine_h

#include "WaterVehicle.h"
#include <iostream>
#include <string>

class Submarine : public WaterVehicle {
private:
    int maxDepth;

public:
    Submarine(const std::string& brand, int year, const std::string& vesselType, int maxDepth)
        : WaterVehicle(brand, year, vesselType), maxDepth(maxDepth) {}

    string getInfo() override {
        return "Submarine class:: Max depth: " + std::to_string(maxDepth) + " meters\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
};

#endif /* Submarine_h */
