#include <iostream>
using namespace std;

class Array {
    int arr[5];

public:
    // Input array elements
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    // Display array elements
    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Friend function declaration
    friend Array operator + (Array a1, Array a2);
};

// Friend function definition
Array operator + (Array a1, Array a2) {
    Array temp;
    for (int i = 0; i < 5; i++) {
        temp.arr[i] = a1.arr[i] + a2.arr[i];
    }
    return temp;
}

int main() {
    Array a1, a2, a3;

    cout << "Enter elements for first array\n";
    a1.input();

    cout << "Enter elements for second array\n";
    a2.input();

    // Adding arrays using friend function
    a3 = a1 + a2;

    cout << "Resultant array after addition:\n";
    a3.display();

    return 0;
}
