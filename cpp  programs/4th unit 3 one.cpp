#include <iostream>
#include <string>

using namespace std;

// Class Template with three generic type parameters: K (Key), V (Value), and T (Tag/Type)
template <typename K, typename V, typename T>
class KeyValuePair {
private:
    K key;
    V value;
    T category;

public:
    // Constructor initializes all three template parameters
    KeyValuePair(K k, V v, T cat) : key(k), value(v), category(cat) {}

    // Getters
    K getKey() const { return key; }
    V getValue() const { return value; }
    T getCategory() const { return category; }

    // Method defined outside the class body
    void printDetails() const;
};

// Defining member function outside the class definition
template <typename K, typename V, typename T>
void KeyValuePair<K, V, T>::printDetails() const {
    cout << "Category: " << category 
         << " | Key: " << key 
         << " | Value: " << value << endl;
}

int main() {
    // Example 1: Key = string, Value = int, Category = char
    KeyValuePair<string, int, char> studentGrade("Alice", 95, 'A');
    studentGrade.printDetails();

    // Example 2: Key = int, Value = double, Category = string
    KeyValuePair<int, double, string> productPrice(101, 29.99, "Electronics");
    productPrice.printDetails();

    // Example 3: Key = string, Value = string, Category = int
    KeyValuePair<string, string, int> userSession("user_admin", "Active", 1);
    userSession.printDetails();

    return 0;
}
