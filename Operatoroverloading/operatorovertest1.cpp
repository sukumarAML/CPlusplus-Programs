#include <iostream>
using namespace std;

class Distance {
    int meter;
    int centimeter;

public:
    Distance(int m = 0, int c = 0) {
        meter = m;
        centimeter = c;
    }

    // Operator overloading
    Distance operator + (Distance d) {
        Distance temp;
        temp.meter = meter + d.meter;
        temp.centimeter = centimeter + d.centimeter;

        // Convert extra centimeters to meters
        if (temp.centimeter >= 100) {
            temp.meter += temp.centimeter / 100;
            temp.centimeter = temp.centimeter % 100;
        }
        return temp;
    }

    void display() {
        cout << "Distance: " << meter << " meters "
             << centimeter << " centimeters" << endl;
    }
};

int main() {
    Distance d1(3, 75), d2(2, 50), d3;

    d3 = d1 + d2;

    d3.display();
    return 0;
}
