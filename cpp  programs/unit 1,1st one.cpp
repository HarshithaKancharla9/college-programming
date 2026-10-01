#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    // Check if the equation is quadratic
    if (a == 0) {
        cout << "Invalid input: 'a' cannot be 0 in a quadratic equation." << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    // Condition 1: Real and distinct roots
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    // Condition 2: Real and equal roots
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and equal:" << endl;
        cout << "Root 1 = Root 2 = " << root << endl;
    }
    // Condition 3: Complex (imaginary) roots
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and imaginary:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
