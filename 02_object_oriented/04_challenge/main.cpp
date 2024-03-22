#include "car.hpp"
#include "tire.hpp"

#include <iostream>

int main(){

    Car car("toyota","prius",2024,30000,195,50,19,"summer");
    Tire* tire = car.getTire();

    std::cout << tire->getWidthSize() << std::endl;
    std::cout << tire->getProfile() << std::endl;
    std::cout << tire->getWheelDiameter() << std::endl;
    std::cout << tire->getType() << std::endl;
}