// コードを入力してください
#include "driver.hpp"

#include <iostream>

Driver::Driver(std::string name, unsigned int age)
        : name(name), age(age){
    if (age < 0) {
        std::cerr << "Negative Driver Age!" << "\n";
    }
}

void Driver::getName() const {
    std::cout << name << std::endl;
}

void Driver::getAge() const {
    std::cout << age << std::endl;
}
