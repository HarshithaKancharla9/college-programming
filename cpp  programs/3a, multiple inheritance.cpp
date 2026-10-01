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

class Sports
{
public:
    void showSports()
    {
        cout << "Sports details" << endl;
    }
};

class Result : public Student, public Sports
{
public:
    void showResult()
    {
        cout << "Result: Passed" << endl;
    }
};

int main()
{
    Result r;

    r.showStudent();
    r.showSports();
    r.showResult();

    return 0;
}
