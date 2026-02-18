#include <iostream>
using namespace std;

class Number {
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Operator overloading function returning an object
    Number operator + (Number obj) {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    // Display function
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(10), n2(20), n3;

    // Using overloaded + operator
    n3 = n1 + n2;

    cout << "First object: ";
    n1.display();

    cout << "Second object: ";
    n2.display();

    cout << "Result after addition: ";
    n3.display();

    return 0;
}
