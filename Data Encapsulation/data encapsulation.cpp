#include <iostream>
#include <string>
#include <iomanip> // For setting precision

using namespace std;

// Define a class named "BankAccount"
class BankAccount {
private:
  string accountNumber;   // Account number (hidden from direct access)
  double balance;        // Account balance (hidden from direct access)

public:
  // Constructor: Initializes the account with an initial balance
  BankAccount(string accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

  // Method to deposit money into the account
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    } else {
      cout << "Invalid deposit amount. Amount must be positive." << endl;
    }
  }

  // Method to withdraw money from the account
  void withdraw(double amount) {
    if (amount > 0 && balance >= amount) {
      balance -= amount;
      cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
    } else if (amount <= 0) {
      cout << "Invalid withdrawal amount. Amount must be positive." << endl;
    } else {
      cout << "Insufficient funds. Current balance: $" << balance << endl;
    }
  }

  // Method to get the account balance (provides controlled access)
  double getBalance() const {
    return balance;
  }

  // Method to get the account number (provides controlled access)
  string getAccountNumber() const {
    return accountNumber;
  }
};

int main() {
  // Create a BankAccount object
  BankAccount myAccount("1234567890", 1000.00);

  // Interact with the account
  myAccount.deposit(500.00);
  myAccount.withdraw(200.00);
  myAccount.withdraw(2000.00); // Attempt to withdraw more than the balance
  cout << "\nAccount Number: " << myAccount.getAccountNumber() << endl;
  cout << "Current Balance: $" << myAccount.getBalance() << endl;

  return 0;
}
