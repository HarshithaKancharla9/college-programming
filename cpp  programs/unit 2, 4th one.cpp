#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // 1. Default Constructor (No arguments)
    Rectangle() {
        width = 1.0;
        height = 1.0;
        cout << "Default constructor called: Square of size 1x1" << endl;
    }

    // 2. Parameterized Constructor with 1 argument (Creates a square)
    Rectangle(double side) {
        width = side;
        height = side;
        cout << "Single-parameter constructor called: Square of size " << side << "x" << side << endl;
    }

    // 3. Parameterized Constructor with 2 arguments (Creates a rectangle)
    Rectangle(double w, double h) {
        width = w;
        height = h;
        cout << "Two-parameter constructor called: Rectangle of size " << w << "x" << h << endl;
    }

    // Method to calculate area
    double area() const {
        return width * height;
    }
};

int main() {
    cout << "--- Constructor Overloading Demo ---" << endl;

    // Triggers Default Constructor
    Rectangle r1;
    cout << "Area of r1: " << r1.area() << "\n\n";

    // Triggers Parameterized Constructor with 1 argument
    Rectangle r2(5.0);
    cout << "Area of r2: " << r2.area() << "\n\n";

    // Triggers Parameterized Constructor with 2 arguments
    Rectangle r3(4.0, 6.0);
    cout << "Area of r3: " << r3.area() << "\n\n";

    return 0;
}
