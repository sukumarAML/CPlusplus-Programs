#include <iostream>
using namespace std;

class Student {
    int roll;
    char name[30];

public:
    // Friend function declarations
    friend istream& operator >> (istream& in, Student& s);
    friend ostream& operator << (ostream& out, Student& s);
};

// Overloading >> operator
istream& operator >> (istream& in, Student& s) {
    cout << "Enter roll number: ";
    in >> s.roll;
    cout << "Enter name: ";
    in >> s.name;
    return in;
}

// Overloading << operator
ostream& operator << (ostream& out, Student& s) {
    out << "Roll Number: " << s.roll << endl;
    out << "Name: " << s.name << endl;
    return out;
}

int main() {
    Student s;

    // Using overloaded input and output operators
    cin >> s;
    cout << s;

    return 0;
}
