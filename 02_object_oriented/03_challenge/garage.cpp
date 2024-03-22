#include "garage.hpp"

#include <iostream>

void Garage::addCar(Car* car){
    this->cars.push_back(car);
} 

void Garage::removeCar(Car* car){
    int index = -1;
    for(Car* remove_car:cars ){
        index++;
        if(remove_car == car){
            cars.erase(cars.begin() + index);
        }
    }
    if(index < 0){
        std::cerr << "the removed car is not found"  << std::endl;
    }
}

int Garage::getNumCars() const{
    return cars.size();
}