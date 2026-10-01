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

class Sports
{
public:
    void sports()
    {
        cout << "Sports details" << endl;
    }
};

class Result : public Student, public Sports
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
    r.sports();
    r.result();

    return 0;
}
