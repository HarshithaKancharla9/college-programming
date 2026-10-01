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

class Engineering : public Student
{
public:
    void engineering()
    {
        cout << "Engineering student" << endl;
    }
};

class Science : public Student
{
public:
    void science()
    {
        cout << "Science student" << endl;
    }
};

int main()
{
    Engineering e;
    Science s;

    e.student();
    e.engineering();

    s.student();
    s.science();

    return 0;
}
