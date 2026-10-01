#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    cout << "List elements: ";

    for (int x : l)
        cout << x << " ";

    cout << "\nAfter adding 5 at beginning: ";
    l.push_front(5);

    for (int x : l)
        cout << x << " ";

    cout << "\nAfter deleting last element: ";
    l.pop_back();

    for (int x : l)
        cout << x << " ";

    return 0;
}
