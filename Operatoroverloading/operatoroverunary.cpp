#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter(int c = 0) {
        count = c;
    }

    // Unary operator overloading
    void operator ++ () {
        ++count;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);

    ++c1;   // Calls operator++

    c1.display();
    return 0;
}
