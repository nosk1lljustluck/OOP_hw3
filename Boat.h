
#ifndef Boat_h
#define Boat_h



#include "WaterVehicle.h"
#include <iostream>
#include <string>

class Boat : public WaterVehicle {
private:
    double length;

public:
    Boat(const std::string& brand, int year, const std::string& vesselType, double length)
        : WaterVehicle(brand, year, vesselType), length(length) {}

    string getInfo() override{
        return "Boat class:: Length: " + toString(length) + " meters\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
};


#endif /* Boat_h */
