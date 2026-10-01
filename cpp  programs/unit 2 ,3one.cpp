#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        rollNumber = 0;
        cout << "[Default Constructor] Student object created with default values." << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int r) : name(n), rollNumber(r) {
        cout << "[Parameterized Constructor] Student object created for: " << name << endl;
    }

    // 3. Copy Constructor
    Student(const Student& existingStudent) {
        name = existingStudent.name;
        rollNumber = existingStudent.rollNumber;
        cout << "[Copy Constructor] Copied student object of: " << name << endl;
    }

    // Method to display student information
    void display() const {
        cout << "   Details -> Name: " << name << ", Roll No: " << rollNumber << endl;
    }

    // 4. Destructor (Automatically called when object goes out of scope)
    ~Student() {
        cout << "[Destructor] Destroying Student object for: " << name << endl;
    }
};

int main() {
    cout << "--- Creating Objects ---" << endl;

    // Triggers Default Constructor
    Student s1;
    s1.display();

    cout << endl;

    // Triggers Parameterized Constructor
    Student s2("Alice", 101);
    s2.display();

    cout << endl;

    // Triggers Copy Constructor
    Student s3 = s2;
    s3.display();

    cout << "\n--- Exiting Main Function (Destructors execute in reverse order of creation) ---" << endl;
    return 0;
}
