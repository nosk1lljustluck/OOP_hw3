#ifndef AirVehicle_h
#define AirVehicle_h

#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

class AirVehicle : public Vehicle {
private:
    int maxAltitude;

public:
    AirVehicle(const std::string& brand, int year, int maxAltitude)
        : Vehicle(brand, year), maxAltitude(maxAltitude) {}

    string getInfo() override {
        return "AirVehicle class:: Max Altitude: " + std::to_string(maxAltitude) + " meters\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
    virtual ~AirVehicle() {}  // Virtual destructor for safety

};


#endif /* AirVehicle_h */
