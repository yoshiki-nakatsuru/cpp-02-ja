# チャレンジ2

次のコードスニペットを調べて抽象クラスと仮想関数に関する問題を特定し、コードを修正してください。

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
