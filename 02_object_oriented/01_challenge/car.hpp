#include <string>
#include "logger.hpp"
class Car {
public:
    Car(std::string make, std::string model, int year, double price);

    void setPrice(double price);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;

    void displayInfo() const;
    void displayPriceHistory() const;
private:
    std::string make;
    std::string model;
    int year;
    double price;
    Logger log;

};
