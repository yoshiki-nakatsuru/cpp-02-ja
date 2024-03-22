// コードを入力してください
#pragma once

#include <string>
class Driver {
public:
    Driver(std::string name, unsigned int age);
    void getName() const;
    void getAge() const;
private:
    std::string name;
    int age;
};