#include <iostream>
#include <string>

using namespace std;

class Box {
private:
    double width;
    double height;

public:
    Box(double w, double h) : width(w), height(h) {}

    // Declare a global function as a friend of this class
    friend void printDimensions(const Box& b);

    // Friend function can also belong to another class or act as a global operator/helper
    friend double calculateArea(const Box& b);
};

// Friend function definition: It is NOT a member function of Box, 
// but it has direct access to Box's private members (width, height).
void printDimensions(const Box& b) {
    cout << "Box Dimensions -> Width: " << b.width << ", Height: " << b.height << endl;
}

double calculateArea(const Box& b) {
    return b.width * b.height;
}

int main() {
    Box myBox(10.5, 5.0);

    // Call friend functions like normal standalone functions (without object dot notation)
    printDimensions(myBox);

    cout << "Calculated Area: " << calculateArea(myBox) << endl;

    return 0;
}
