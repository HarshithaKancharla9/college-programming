#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter a number (1, 2 or 3): ";
    cin >> choice;

    try
    {
        if (choice == 1)
            throw 10;
        else if (choice == 2)
            throw 3.14;
        else if (choice == 3)
            throw "String Exception";
        else
            cout << "No exception" << endl;
    }

    catch (int x)
    {
        cout << "Integer exception: " << x << endl;
    }

    catch (double x)
    {
        cout << "Double exception: " << x << endl;
    }

    catch (const char* x)
    {
        cout << "String exception: " << x << endl;
    }

    return 0;
}
