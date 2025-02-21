#ifndef LandVehicle_h
#define LandVehicle_h

#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

class LandVehicle: public Vehicle{
private:
    int numWheels;
public:
    LandVehicle(const std::string& brand, int year, int numWheels)
            : Vehicle(brand, year), numWheels(numWheels) {}
    string getInfo() override{
        return "LandVehicle class:: Number of wheels " + std::to_string(numWheels) + "\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
    virtual ~LandVehicle() {}
    
};


#endif /* LandVehicle_h */
