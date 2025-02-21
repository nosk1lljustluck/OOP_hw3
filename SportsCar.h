

#ifndef SportsCar_h
#define SportsCar_h

#include "Car.h"
#include <iostream>
#include <string>

class SportsCar : public Car { // Public inheritance from Car
private:
    int maxSpeed; // Maximum speed of the sports car in km/h

public:
    // Constructor: Initializes Vehicle, LandVehicle, Car, and maxSpeed
    SportsCar(const std::string& brand, int year, int numWheels, int numDoors, double maxSpeed)
        : Car(brand, year, numWheels, numDoors), maxSpeed(maxSpeed) {}

    // Overriding getInfo() function
    string getInfo() override{
        return "SportsCar class:: Max speed: " + std::to_string(maxSpeed) + " km/h\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
};

#endif /* SportsCar_h */
