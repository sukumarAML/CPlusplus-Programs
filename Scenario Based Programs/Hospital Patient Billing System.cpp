#include <iostream>
using namespace std;

// Custom Exception
class InvalidData {
public:
    void show() {
        cout << "Error: Days and Charges must be positive!" << endl;
    }
};

class Patient {
private:
    int patientID;
    string name;
    int days;
    float chargePerDay;
    float totalBill;

public:
    void input() {
        cout << "Enter Patient ID: ";
        cin >> patientID;
        cout << "Enter Patient Name: ";
        cin >> name;

        try {
            cout << "Enter Number of Days: ";
            cin >> days;
            cout << "Enter Charge per Day: ";
            cin >> chargePerDay;

            if (days < 0 || chargePerDay < 0) {
                throw InvalidData();
            }
        }
        catch (InvalidData e) {
            e.show();
            days = 0;
            chargePerDay = 0;
        }
    }

    void calculateBill() {
        totalBill = days * chargePerDay;

        if (days > 5) {
            totalBill *= 0.9; // 10% discount
        }
    }

    void display() {
        cout << "\n--- Patient Bill ---\n";
        cout << "Patient ID: " << patientID << endl;
        cout << "Name: " << name << endl;
        cout << "Days: " << days << endl;
        cout << "Charge/Day: " << chargePerDay << endl;
        cout << "Total Bill: " << totalBill << endl;
    }
};

int main() {
    Patient p;

    p.input();
    p.calculateBill();
    p.display();

    return 0;
}
