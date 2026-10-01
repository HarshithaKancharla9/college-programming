#include <iostream>
using namespace std;

// 1. Inline Functions (reduces function call overhead for small operations)
inline int add(int a, int b) {
    return a + b;
}

// 2. Function Overloading (same name 'add', different parameter types and counts)

// Overloaded function: takes three integers
inline int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function: takes two doubles
inline double add(double a, double b) {
    return a + b;
}

// Overloaded function: takes two strings (concatenation)
string add(string a, string b) {
    return a + b;
}

int main() {
    cout << "--- Inline Functions & Function Overloading ---" << endl;

    // Calls add(int, int)
    cout << "Adding two integers (10 + 20): " << add(10, 20) << endl;

    // Calls add(int, int, int)
    cout << "Adding three integers (5 + 10 + 15): " << add(5, 10, 15) << endl;

    // Calls add(double, double)
    cout << "Adding two doubles (3.5 + 2.5): " << add(3.5, 2.5) << endl;

    // Calls add(string, string)
    cout << "Adding two strings ('Hello ' + 'World'): " << add(string("Hello "), string("World")) << endl;

    return 0;
}
