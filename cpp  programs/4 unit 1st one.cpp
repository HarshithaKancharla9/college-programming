#include <iostream>
#include <string>

using namespace std;

// 1. Basic Function Template (Single Type Parameter)
template <typename T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}

// 2. Function Template with Multiple Type Parameters
template <typename T1, typename T2>
void printPair(T1 key, T2 value)
{
    cout << "Key: " << key << " | Value: " << value << endl;
}

// 3. Template Specialization for std::string (Custom behavior)
template <>
string getMax<string>(string a, string b)
{
    // Custom logic: compare strings based on length instead of alphabetical order
    return (a.length() > b.length()) ? a : b;
}

int main()
{
    cout << "--- Single Parameter Template Examples ---" << endl;
    // Compilers infer types automatically, or you can specify explicitly: getMax<int>(5, 10)
    cout << "Max of 5 and 10: " << getMax(5, 10) << endl;             // Works with int
    cout << "Max of 3.14 and 2.71: " << getMax(3.14, 2.71) << endl;  // Works with double
    cout << "Max of 'a' and 'z': " << getMax('a', 'z') << endl;       // Works with char

    cout << "\n--- Template Specialization Example ---" << endl;
    // Uses specialized length-based comparison defined above
    string str1 = "Apple";
    string str2 = "Watermelon";
    cout << "Longer string ('Apple' vs 'Watermelon'): " << getMax(str1, str2) << endl;

    cout << "\n--- Multiple Parameter Template Examples ---" << endl;
    printPair("Age", 25);               // string and int
    printPair(101, "Product A");        // int and string
    printPair("Pi", 3.14159);           // string and double

    return 0;
}
