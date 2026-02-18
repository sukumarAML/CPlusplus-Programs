#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    // Friend function declaration
    friend Number operator + (Number n1, Number n2);

    void display() {
        cout << "Value: " << value << endl;
    }
};

// Friend function definition
Number operator + (Number n1, Number n2) {
    Number temp;
    temp.value = n1.value + n2.value;
    return temp;
}

int main() {
    Number a(10), b(20), c;

    c = a + b;

    c.display();
    return 0;
}
