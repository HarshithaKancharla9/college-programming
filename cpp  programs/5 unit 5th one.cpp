#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> studentGrades;

    // 1. Inserting elements
    studentGrades["Alice"] = 90;
    studentGrades["Bob"] = 85;
    studentGrades["Charlie"] = 95;

    cout << "Student Grades:" << endl;

    // Display map elements
    for (map<string, int>::iterator it = studentGrades.begin(); 
         it != studentGrades.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // 2. Searching an element
    string name = "Bob";

    if (studentGrades.find(name) != studentGrades.end())
        cout << "\n" << name << " found" << endl;
    else
        cout << "\n" << name << " not found" << endl;


    // 3. Updating an element
    studentGrades["Bob"] = 88;

    cout << "\nAfter updating Bob:" << endl;
    for (map<string, int>::iterator it = studentGrades.begin(); 
         it != studentGrades.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }


    // 4. Deleting an element
    studentGrades.erase("Bob");

    cout << "\nAfter deleting Bob:" << endl;
    for (map<string, int>::iterator it = studentGrades.begin(); 
         it != studentGrades.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }


    // 5. Map size and clearing
    cout << "\nMap size: " << studentGrades.size() << endl;

    studentGrades.clear();

    cout << "Is map empty after clear()? ";

    if (studentGrades.empty())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
