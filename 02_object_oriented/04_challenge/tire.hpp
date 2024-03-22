#pragma once 

#include <string>

class Tire{
public:
    Tire(int widthSize, int profile, int wheelDiametter, std::string type);
    int getWidthSize() const;
    int getProfile() const;
    int getWheelDiameter() const;
    std::string getType() const;
private:
    int widthSize;
    int profile;
    int wheelDiameter;
    std::string type;

};