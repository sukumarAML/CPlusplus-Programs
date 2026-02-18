#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student(int m = 0) {
        marks = m;
    }

    void show() {
        cout << "Marks: " << marks << endl;
    }

    // Overloading member access operator
    Student* operator->() {
        return this;
    }
};

int main() {
    Student s1(85);

    // Using overloaded -> operator
    s1->show();

    return 0;
}
