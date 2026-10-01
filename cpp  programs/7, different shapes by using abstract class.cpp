#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;   // Pure virtual function
};

class Rectangle : public Shape
{
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Rectangle r(10, 5);
    Circle c(7);

    r.area();
    c.area();

    return 0;
}
