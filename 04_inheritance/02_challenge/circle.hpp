// コードを入力してください
#pragma once

#include "shape.hpp"
class Circle : public Shape {
public:
    Circle(double radius) : m_radius(radius) {}
    double getArea();

private:
    double m_radius;
};