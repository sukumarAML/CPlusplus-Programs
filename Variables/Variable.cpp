#include <iostream>
#include <string>

// Use the standard namespace to avoid writing std:: repeatedly
using namespace std;

int main() {
    // 1. Variable Declaration and Initialization
    // Data type followed by variable name and an optional initial value
    int integerVariable = 42;
    double doubleVariable = 3.14;
    char charVariable = 'A';
    string stringVariable = "Hello, C++";
    bool boolVariable = true;

    // 2. Using variables (outputting their values)
    cout << "Initial Values:" << endl;
    cout << "Integer: " << integerVariable << endl;
    cout << "Double: " << doubleVariable << endl;
    cout << "Char: " << charVariable << endl;
    cout << "String: " << stringVariable << endl;
    cout << "Boolean: " << boolVariable << endl << endl;

    // 3. Modifying variables (assigning new values)
    integerVariable = 100; // Overwrites the old value
    doubleVariable = 2.718;
    stringVariable = "Variables are great!";
    boolVariable = false;

    // 4. Using variables in expressions
    int sum = integerVariable + 50;

    cout << "Updated Values:" << endl;
    cout << "Integer: " << integerVariable << endl;
    cout << "Double: " << doubleVariable << endl;
    cout << "String: " << stringVariable << endl;
    cout << "Boolean: " << boolVariable << endl;
    cout << "Sum (Integer + 50): " << sum << endl;

    return 0; // Indicates successful execution
}

