#include "car.hpp"
#include "garage.hpp"

#include <iostream>

int main(){
    Car carA("toyota","prius",2020,300000);
    Car carB("toyota","prius",2021,300000);
    Car carC("toyota","prius",2022,300000);

    Garage garage;
    garage.addCar(&carA);
    std::cout << garage.getNumCars() << std::endl;
    garage.addCar(&carB);
    std::cout << garage.getNumCars() << std::endl;
    garage.addCar(&carC);
    std::cout << garage.getNumCars() << std::endl;   
    garage.removeCar(&carB) ;
    std::cout << garage.getNumCars() << std::endl;   
}