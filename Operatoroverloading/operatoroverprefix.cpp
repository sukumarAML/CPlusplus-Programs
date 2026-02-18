#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    // Constructor
    Counter(int c = 0) {
        count = c;
    }

    // Overloading prefix ++ operator
    void operator ++ () {
        ++count;
    }

    // Overloading prefix -- operator
    void operator -- () {
        --count;
    }

    // Display function
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(10);

    cout << "Initial value:" << endl;
    c1.display();

    ++c1;   // increment
    cout << "After ++ operator:" << endl;
    c1.display();

    --c1;   // decrement
    cout << "After -- operator:" << endl;
    c1.display();

    return 0;
}
