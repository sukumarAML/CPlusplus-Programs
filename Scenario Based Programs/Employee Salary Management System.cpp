#include <iostream>
using namespace std;

// Custom Exception
class InvalidSalary {
public:
    void show() {
        cout << "Error: Salary cannot be negative!" << endl;
    }
};

class Employee {
private:
    int empId;
    string name;
    float basic, hra, da, gross;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Name: ";
        cin >> name;

        try {
            cout << "Enter Basic Salary: ";
            cin >> basic;

            if (basic < 0) {
                throw InvalidSalary();
            }
        }
        catch (InvalidSalary e) {
            e.show();
            basic = 0;
        }
    }

    void calculate() {
        hra = 0.2 * basic;
        da  = 0.1 * basic;
        gross = basic + hra + da;
    }

    void display() {
        cout << "\n--- Salary Details ---\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

int main() {
    Employee e;

    e.input();
    e.calculate();
    e.display();

    return 0;
}
