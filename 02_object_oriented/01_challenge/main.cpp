// コードを入力してください

#include <iostream>
#include "car.hpp"

int main(){

    Car prius("Toyota", "Prius", 2024, 30000);

    prius.displayInfo();
    prius.setPrice(31000);
    prius.displayInfo();
    prius.setPrice(30500);
    prius.displayInfo();    
    prius.displayPriceHistory();

}