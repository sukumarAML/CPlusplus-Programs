#include <iostream>
using namespace std;

class Array {
    int arr[5];

public:
    // Function to insert elements
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    // Overloading subscript operator
    int& operator [] (int index) {
        return arr[index];
    }

    // Display array elements
    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array a;

    a.input();

    cout << "Array elements are:\n";
    a.display();

    // Using overloaded subscript operator
    cout << "Element at index 2: " << a[2] << endl;

    // Modifying element using subscript operator
    a[2] = 100;

    cout << "Array after modification:\n";
    a.display();

    return 0;
}
