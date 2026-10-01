#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int* marks; // Pointer to demonstrate deep copy

public:
    // Parameterized Constructor
    Student(string n, int r, int m) {
        name = n;
        rollNumber = r;
        marks = new int(m); // Dynamically allocate memory
        cout << "[Parameterized Constructor] Object created for: " << name << endl;
    }

    // Copy Constructor (Syntax: ClassName(const ClassName &obj))
    Student(const Student& existingStudent) {
        name = existingStudent.name;
        rollNumber = existingStudent.rollNumber;
        
        // Deep Copy: Allocate separate memory space for the copied object's pointer
        marks = new int(*(existingStudent.marks));

        cout << "[Copy Constructor] Copied details from: " << existingStudent.name << endl;
    }

    // Setter to update mark value (to test independence of copied objects)
    void setMarks(int m) {
        *marks = m;
    }

    // Display function
    void display() const {
        cout << "   Name: " << name 
             << " | Roll No: " << rollNumber 
             << " | Marks: " << *marks 
             << " | Marks Memory Address: " << marks << endl;
    }

    // Destructor to free dynamically allocated memory
    ~Student() {
        delete marks;
        cout << "[Destructor] Memory freed for: " << name << endl;
    }
};

int main() {
    cout << "--- 1. Creating Original Object ---" << endl;
    Student student1("Alice", 101, 85);
    student1.display();

    cout << "\n--- 2. Invoking Copy Constructor ---" << endl;
    // Copies student1 into student2 using the Copy Constructor
    Student student2 = student1; // Equivalent to: Student student2(student1);
    student2.display();

    cout << "\n--- 3. Verifying Deep Copy Independence ---" << endl;
    // Modifying student2's marks does not alter student1's marks
    student2.setMarks(98);

    cout << "Student 1 details after updating Student 2:" << endl;
    student1.display();

    cout << "Student 2 details:" << endl;
    student2.display();

    cout << "\n--- Exiting Main ---" << endl;
    return 0;
}
