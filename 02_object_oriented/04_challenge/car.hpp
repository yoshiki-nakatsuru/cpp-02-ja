#pragma once
#include <string>

#include "tire.hpp"

class Car {
public:
    Car(std::string make, std::string model, int year, double price, int widthSize, int profile, int wheelDiametter, std::string type);
    ~Car();
    void setPrice(double price);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;
    Tire* getTire() const;
    void displayInfo() const;
    
private:
    void printPriceChange(double from, double to) const;

    std::string make;
    std::string model;
    int year;
    double price;
    Tire* tire;
};
