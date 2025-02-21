#ifndef Vehicle_h
#define Vehicle_h


#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(const std::string& brand, int year) : brand(brand), year(year) {}
    virtual string getInfo() = 0;
    virtual ~Vehicle() {}
};

#endif /* Vehicle_h */
