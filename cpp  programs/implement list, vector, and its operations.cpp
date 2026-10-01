#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
    // ---------------- VECTOR ----------------
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for (int x : v)
        cout << x << " ";

    v.push_back(40);

    cout << "\nAfter adding 40: ";
    for (int x : v)
        cout << x << " ";

    v.pop_back();

    cout << "\nAfter deleting last element: ";
    for (int x : v)
        cout << x << " ";

    v.insert(v.begin(), 5);

    cout << "\nAfter inserting 5 at beginning: ";
    for (int x : v)
        cout << x << " ";

    v.erase(v.begin() + 1);

    cout << "\nAfter deleting second element: ";
    for (int x : v)
        cout << x << " ";

    // ---------------- LIST ----------------
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    cout << "\n\nList elements: ";
    for (int x : l)
        cout << x << " ";

    l.push_front(5);

    cout << "\nAfter adding 5 at beginning: ";
    for (int x : l)
        cout << x << " ";

    l.push_back(40);

    cout << "\nAfter adding 40 at end: ";
    for (int x : l)
        cout << x << " ";

    l.pop_front();

    cout << "\nAfter deleting first element: ";
    for (int x : l)
        cout << x << " ";

    l.pop_back();

    cout << "\nAfter deleting last element: ";
    for (int x : l)
        cout << x << " ";

    return 0;
}
