#include <iostream>
using namespace std;

class Student
{
public:
    void student()
    {
        cout << "Student details" << endl;
    }
};

class Marks : public Student
{
public:
    void marks()
    {
        cout << "Marks: 90" << endl;
    }
};

class Result : public Marks
{
public:
    void result()
    {
        cout << "Result: Pass" << endl;
    }
};

int main()
{
    Result r;

    r.student();
    r.marks();
    r.result();

    return 0;
}
