#include <iostream>
using namespace std;

class Array {
    int arr[5];

public:
    // Function to input array elements
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    // Overloading subscript operator
    int& operator[](int index) {
        return arr[index];
    }

    // Function to display array elements
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

    cout << "Original array:\n";
    a.display();

    // Accessing array elements using overloaded operator
    cout << "Element at index 1: " << a[1] << endl;

    // Modifying array element using subscript operator
    a[1] = 99;

    cout << "Array after modification:\n";
    a.display();

    return 0;
}
