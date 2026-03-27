#include <iostream>
using namespace std;

// Custom Exception
class InvalidHours {
public:
    void show() {
        cout << "Error: Parking hours cannot be negative!" << endl;
    }
};

class Parking {
private:
    string vehicleNo;
    int type; // 1 = 2-wheeler, 2 = 4-wheeler
    int hours;
    float charge;

public:
    void input() {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNo;

        cout << "Enter Vehicle Type (1: 2-wheeler, 2: 4-wheeler): ";
        cin >> type;

        try {
            cout << "Enter Parking Hours: ";
            cin >> hours;

            if (hours < 0) {
                throw InvalidHours();
            }
        }
        catch (InvalidHours e) {
            e.show();
            hours = 0;
        }
    }

    void calculate() {
        if (type == 1)
            charge = hours * 20;
        else if (type == 2)
            charge = hours * 50;
        else
            charge = 0;
    }

    void display() {
        cout << "\n--- Parking Details ---\n";
        cout << "Vehicle No: " << vehicleNo << endl;
        cout << "Type: " << (type == 1 ? "2-wheeler" : "4-wheeler") << endl;
        cout << "Hours: " << hours << endl;
        cout << "Total Charge: ₹" << charge << endl;
    }
};

int main() {
    Parking p;

    p.input();
    p.calculate();
    p.display();

    return 0;
}
