#include <iostream>
using namespace std;

// Custom exception class
class InsufficientBalance {
public:
    void message() {
        cout << "Error: Insufficient Balance!" << endl;
    }
};

class BankAccount {
private:
    int accNo;
    string name;
    double balance;

public:
    // Function to create account
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit function
    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    // Withdraw function with exception handling
    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        try {
            if (amount > balance) {
                throw InsufficientBalance();
            }
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
        catch (InsufficientBalance e) {
            e.message();
        }
    }

    // Display account details
    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;

    acc.createAccount();

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                acc.deposit();
                break;
            case 2:
                acc.withdraw();
                break;
            case 3:
                acc.display();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 4);

    return 0;
}
