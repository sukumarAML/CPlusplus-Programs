#include <iostream>
using namespace std;

// Custom exception
class InvalidMarks {
public:
    void message() {
        cout << "Error: Marks should be between 0 and 100!" << endl;
    }
};

class Student {
private:
    int rollNo;
    string name;
    float m1, m2, m3, total, average;
    char grade;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;

        try {
            cout << "Enter marks for 3 subjects: ";
            cin >> m1 >> m2 >> m3;

            if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
                throw InvalidMarks();
            }
        }
        catch (InvalidMarks e) {
            e.message();
            m1 = m2 = m3 = 0; // default safe values
        }
    }

    void calculate() {
        total = m1 + m2 + m3;
        average = total / 3;

        if (average >= 90) grade = 'A';
        else if (average >= 75) grade = 'B';
        else if (average >= 50) grade = 'C';
        else grade = 'F';
    }

    void display() {
        cout << "\n--- Student Result ---\n";
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}
