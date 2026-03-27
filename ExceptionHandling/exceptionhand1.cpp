#include <iostream>
using namespace std;

int main() {
    try {
        // Example 1: Division by zero
        int a = 10, b = 0;
        if (b == 0) {
            throw "Error: Division by zero!";
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const char* e) {
        cout << "Caught exception: " << e << endl;
    }

    try {
        // Example 2: Custom exception with int
        int age = -5;
        if (age < 0) {
            throw age;
        }
        cout << "Age: " << age << endl;
    }
    catch (int e) {
        cout << "Caught exception: Invalid age " << e << endl;
    }

    try {
        // Example 3: Out of range exception
        int arr[5] = {1, 2, 3, 4, 5};
        int index = 10;
        if (index >= 5) {
            throw string("Error: Array index out of range!");
        }
        cout << "Element: " << arr[index] << endl;
    }
    catch (string e) {
        cout << "Caught exception: " << e << endl;
    }

    cout << "Program completed successfully!" << endl;
    return 0;
}