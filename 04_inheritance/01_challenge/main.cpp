#include <string>


class Vehicle{
public:
    Vehicle();
private:
    int speed;
    int gas;
};

class Car : Vehicle {
public:
    Car();
private:
    std::string frontRightTire;
    std::string frontLeftTire;
    std::string rearRightTire;
    std::string rearLeftTire;    

};

class Motorcycle : Vehicle{
public:
    Motorcycle();
private:
    std::string frontTire;
    std::string rearTire;    

};


int main(){

}