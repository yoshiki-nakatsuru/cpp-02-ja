#pragma once

#include <vector>
#include "car.hpp"

class Garage{
public:
    void addCar(Car* car);
    void removeCar(Car* car);
    int getNumCars() const;
private:
    std::vector<Car*> cars;
};