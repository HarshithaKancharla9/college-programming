#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);

    cout << "Deque elements: ";

    for (int i : d)
    {
        cout << i << " ";
    }

    d.push_front(5);

    cout << "\nAfter adding 5 at front: ";

    for (int i : d)
    {
        cout << i << " ";
    }

    d.push_back(40);

    cout << "\nAfter adding 40 at back: ";

    for (int i : d)
    {
        cout << i << " ";
    }

    d.pop_front();

    cout << "\nAfter deleting front element: ";

    for (int i : d)
    {
        cout << i << " ";
    }

    d.pop_back();

    cout << "\nAfter deleting last element: ";

    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}
