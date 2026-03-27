#include <iostream>

using namespace std;

int main() {
    double num, den;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;
    try {
        if (den == 0) {
            throw "Division by zero!";
        }
        double result = num / den;
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}