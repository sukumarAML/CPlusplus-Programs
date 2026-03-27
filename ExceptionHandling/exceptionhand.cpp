#include <iostream>
using namespace std;

int main() {
    try {
        int numerator = 10;
        int denominator = 0;
        
        if (denominator == 0) {
            throw invalid_argument("Division by zero is not allowed!");
        }
        
        int result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (invalid_argument &e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    catch (exception &e) {
        cout << "Generic exception: " << e.what() << endl;
    }
    
    cout << "Program continues after exception handling." << endl;
    return 0;
}