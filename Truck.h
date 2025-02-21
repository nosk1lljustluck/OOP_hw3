

#ifndef Truck_h
#define Truck_h

#include "LandVehicle.h"
#include <iostream>
#include <string>

std::string toString(double value) {
    return std::to_string(value).substr(0, std::to_string(value).find_last_not_of('0') + 1);
}
class Truck : public LandVehicle {
private:
    double loadCapacity;

public:
    Truck(const std::string& brand, int year, int numWheels, double loadCapacity)
        : LandVehicle(brand, year, numWheels), loadCapacity(loadCapacity) {}

    string getInfo() override {
        return "Truck class:: Load capacity: " + toString(loadCapacity) + " meters\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
};

#endif /* Truck_h */
