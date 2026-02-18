#include <iostream>
using namespace std;

class Number {
    int value;

public:
    // Constructor
    Number(int v) {
        value = v;
    }

    // Unary operator overloading using member function
    void operator - () {
        value = -value;
    }

    // Display function
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number obj(10);

    cout << "Before applying unary operator:" << endl;
    obj.display();

    // Applying unary minus operator
    -obj;

    cout << "After applying unary operator:" << endl;
    obj.display();

    return 0;
}
