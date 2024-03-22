// コードを入力してください
#include "car.hpp"
#include "driver.hpp"
#include <iostream>

int main(){
    Driver driver("Tom",27);

    Car car("toyota", "prius", 2024, 30000);
    car.setDriver(&driver);

    Driver* temp = car.getDriver();

    temp->getName();
    temp->getAge();
}