#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

// 1. Class Template with Multiple Type Parameters
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Getters
    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }

    // Display function defined outside class body
    void display() const;
};

// Defining member function outside the class template definition
template <typename T1, typename T2>
void Pair<T1, T2>::display() const {
    cout << "Pair: (" << first << ", " << second << ")" << endl;
}


// 2. Class Template with Single Parameter & Default Type (Generic Stack)
template <typename T = int>
class Stack {
private:
    vector<T> elements;

public:
    void push(const T& val) {
        elements.push_back(val);
    }

    void pop() {
        if (elements.empty()) {
            throw out_of_range("Stack underflow: Cannot pop from empty stack.");
        }
        elements.pop_back();
    }

    T top() const {
        if (elements.empty()) {
            throw out_of_range("Stack is empty.");
        }
        return elements.back();
    }

    bool empty() const {
        return elements.empty();
    }

    size_t size() const {
        return elements.size();
    }
};

int main() {
    cout << "--- 1. Testing Pair Class Template ---" << endl;
    // Pair holding (string, int)
    Pair<string, int> student("Alice", 101);
    student.display();

    // Pair holding (double, double)
    Pair<double, double> coordinates(17.6868, 83.2185);
    coordinates.display();


    cout << "\n--- 2. Testing Stack Class Template ---" << endl;
    // Stack of integers (uses default template argument int)
    Stack<> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << "Integer Stack Top: " << intStack.top() << " (Size: " << intStack.size() << ")" << endl;
    intStack.pop();
    cout << "After Pop, Top: " << intStack.top() << endl;

    // Stack of strings
    Stack<string> stringStack;
    stringStack.push("C++");
    stringStack.push("Templates");

    cout << "\nString Stack Top: " << stringStack.top() << endl;

    return 0;
}
