#include <iostream>
#include <string>

using namespace std;

// Base class demonstrating Access Specifiers
class Account {
private:
    // PRIVATE: Accessible ONLY inside this class
    double balance;

protected:
    // PROTECTED: Accessible inside this class AND derived classes
    string accountType;

public:
    // PUBLIC: Accessible from anywhere outside the class

    // Constructor with DEFAULT ARGUMENTS
    // If arguments are omitted during object creation, these defaults are used:
    // initialBalance = 0.0, type = "Savings"
    Account(double initialBalance = 0.0, string type = "Savings") {
        balance = initialBalance;
        accountType = type;
        cout << "[Account Constructor] Account created with type: " << accountType << endl;
    }

    // Member function with DEFAULT ARGUMENTS
    // fee defaults to 0.0 if not provided
    void deposit(double amount, double fee = 0.0) {
        if (amount > 0) {
            balance += (amount - fee);
            cout << "Deposited: $" << amount << " (Fee applied: $" << fee << ")" << endl;
        }
    }

    // Public getter function to access private 'balance' safely
    double getBalance() const {
        return balance;
    }
};

// Derived class to demonstrate access to 'protected' members
class PremiumAccount : public Account {
public:
    // Constructor passing default arguments up to base class constructor
    PremiumAccount(double initialBalance = 100.0) 
        : Account(initialBalance, "Premium") {}

    void showType() {
        // Direct access to 'accountType' is allowed because it is 'protected' in Account
        cout << "Accessing protected member -> Account Type: " << accountType << endl;

        // Direct access to 'balance' would cause a compiler error here because 'balance' is 'private'
        // cout << balance; // UNCOMMENTING THIS WILL CAUSE COMPILE ERROR
    }
};

int main() {
    cout << "--- 1. Testing Default Arguments in Constructors ---" << endl;
    
    // Uses all default arguments (balance = 0.0, type = "Savings")
    Account acc1; 
    
    // Uses provided balance, defaults type to "Savings"
    Account acc2(500.0); 

    // Overrides both default arguments
    Account acc3(1500.0, "Checking"); 

    cout << "\n--- 2. Testing Default Arguments in Functions ---" << endl;
    
    // Omits 'fee' argument -> uses default fee = 0.0
    acc2.deposit(200.0); 

    // Explicitly provides 'fee' argument -> overrides default
    acc2.deposit(300.0, 5.0); 

    cout << "Current Balance (acc2): $" << acc2.getBalance() << endl;

    cout << "\n--- 3. Testing Access Specifiers ---" << endl;
    
    PremiumAccount premAcc(1000.0);
    premAcc.showType(); // Accesses protected member inside derived class

    // Public members can be accessed from main():
    cout << "Accessing public method -> Balance: $" << premAcc.getBalance() << endl;

    // Private/Protected members CANNOT be accessed directly from main():
    // premAcc.balance = 5000.0;    // ERROR: 'balance' is private
    // premAcc.accountType = "VIP"; // ERROR: 'accountType' is protected

    return 0;
}
