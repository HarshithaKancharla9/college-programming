#include <iostream>
using namespace std;

class Student
{
public:
    void showStudent()
    {
        cout << "Student details" << endl;
    }
};

class Marks : public Student
{
public:
    void showMarks()
    {
        cout << "Marks: 90" << endl;
    }
};

int main()
{
    Marks m;

    m.showStudent();
    m.showMarks();

    return 0;
}
