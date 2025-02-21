
#ifndef WaterVehicle_h
#define WaterVehicle_h

#include "Vehicle.h"
#include <iostream>
#include <string>

class WaterVehicle : public Vehicle {
private:
    std::string vesselType;

public:
    WaterVehicle(const std::string& brand, int year, const std::string& vesselType)
        : Vehicle(brand, year), vesselType(vesselType) {}

    string getInfo() override {
        return "WaterVehicle class:: Vessel type: " + vesselType + "\n" +
                   "Vehicle class:: Brand: " + brand + "\n" +
                   "Vehicle class:: Year: " + std::to_string(year);
    }
};

#endif
