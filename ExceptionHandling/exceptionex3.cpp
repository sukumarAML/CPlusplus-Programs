#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient;
    
    cout << "Enter dividend: ";
    cin >> dividend;
    
    cout << "Enter divisor: ";
    cin >> divisor;
    
    try {
        if (divisor == 0) {
            throw invalid_argument("Division by zero is not allowed!");
        }
        quotient = dividend / divisor;
        cout << "Quotient: " << quotient << endl;
    }
    catch (invalid_argument &e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    
    return 0;
}