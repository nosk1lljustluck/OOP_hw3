

#ifndef Truck_h
#define Truck_h

#include "LandVehicle.h"
#include <iostream>
#include <string>

class Truck : public LandVehicle {
private:
    double loadCapacity;

public:
    Truck(const std::string& brand, int year, int numWheels, double loadCapacity)
        : LandVehicle(brand, year, numWheels), loadCapacity(loadCapacity) {}

    string getInfo() override {
        return "Truck class:: Load capacity: " + std::to_string((int)loadCapacity) + " meters\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
};

#endif /* Truck_h */
