# Key improvements and explanations:
**Encapsulation:** The accountNumber and balance are declared as private. This means they can only be accessed or modified from within the BankAccount class. This is the core principle of encapsulation.
**Constructor:** The constructor initializes the accountNumber and balance when a BankAccount object is created. The initializer list is used for efficiency.
**deposit() and withdraw() Methods:** These methods provide controlled access to the account's balance. They include input validation to ensure that deposits and withdrawals are valid (positive amounts and sufficient funds).
getBalance() and getAccountNumber() Methods: These methods provide a controlled way to access the balance and accountNumber without directly exposing them to the outside world. The const keyword indicates that these methods do not modify the object's state.
Input Validation: The deposit() and withdraw() methods include input validation to ensure that the amount being deposited or withdrawn is valid (positive amount). This is important for preventing errors and maintaining the integrity of the account balance.
Clear Output: The program displays the results of the deposit and withdrawal operations, along with the new balance.
# **How to compile and run:**

**Save:** Save the code as a .cpp file (e.g., bank_account.cpp). \
Compile: Use a C++ compiler (like g++) to compile the code: \
_g++ bank_account.cpp -o bank_account_ \
**Run:** Execute the compiled program:
_./bank_account_ \
This program demonstrates the principles of data encapsulation in C++ by hiding the internal state of the BankAccount object and providing controlled access through methods. This improves the robustness and maintainability of the code.
