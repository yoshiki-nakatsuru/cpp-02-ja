# Challenge 2

Examine the following code snippet and identify any issues with the abstract class and virtual function. Provide a corrected version of the code.

```cpp
class Shape {
public:
    void getArea() = 0;
};

class Circle : public Shape {
public:
    Circle(double radius) : m_radius(radius) {}
    double getArea() { return 3.14159 * m_radius * m_radius; }

private:
    double m_radius;
};
```
