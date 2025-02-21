

#ifndef Car_h
#define Car_h

#include "LandVehicle.h"
#include <iostream>
#include <string>

class Car : public LandVehicle {
private:
    int numDoors;

public:
    Car(const std::string& brand, int year, int numWheels, int numDoors)
        : LandVehicle(brand, year, numWheels), numDoors(numDoors) {}

    string getInfo() override {
        return "Car class:: Number of doors: " + std::to_string(numDoors) + "\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
};

#endif /* Car_h */
