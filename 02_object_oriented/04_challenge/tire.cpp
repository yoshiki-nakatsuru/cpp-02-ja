#include "tire.hpp"

#include <iostream>

Tire::Tire(int widthSize, int profile, int wheelDiameter, std::string type)
        : widthSize(widthSize), profile(profile), wheelDiameter(wheelDiameter), type(type){
    if (widthSize < 0) {
        std::cerr << "Negative Tire widthSize!" << std::endl;
    }
    if (wheelDiameter < 0) {
        std::cerr << "Negative Tire wheelDiameter!" << std::endl;
    }
    if (profile < 0) {
        std::cerr << "Negative Tire profile!" << std::endl;
    }
}

int Tire::getWidthSize() const {return widthSize;}

int Tire::getProfile() const {return profile;}

int Tire::getWheelDiameter() const {return wheelDiameter;}

std::string Tire::getType() const {return type;}