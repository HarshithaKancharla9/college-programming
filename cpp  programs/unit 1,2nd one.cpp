#include <iostream>

using namespace std;

// Recursive function to calculate factorial
long long factorial(int n) {
    // Base Case: Factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive Step: n * factorial(n - 1)
    return n * factorial(n - 1);
}

int main() {
    int num;

    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Check for negative input
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " = " << factorial(num) << endl;
    }

    return 0;
}
