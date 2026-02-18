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

    // Operator overloading for +
    Array operator + (Array a) {
        Array temp;
        for (int i = 0; i < 5; i++) {
            temp.arr[i] = arr[i] + a.arr[i];
        }
        return temp;
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
    Array a1, a2, a3;

    cout << "Enter elements for first array\n";
    a1.input();

    cout << "Enter elements for second array\n";
    a2.input();

    // Adding two arrays using overloaded + operator
    a3 = a1 + a2;

    cout << "Resultant array after addition:\n";
    a3.display();

    return 0;
}
