#include <iostream>
#include <iomanip> // For setting precision
#include <string>

using namespace std;

int main() {
  int age = 25;
  string status;

  // 1. Basic Ternary Operator
  status = (age >= 18) ? "Adult" : "Minor";
  cout << "Basic Ternary: Age is " << age << ", Status: " << status << endl;

  // 2. Ternary with Expression Evaluation
  int score = 75;
  string result = (score >= 90) ? "A" : (score >= 80) ? "B" : (score >= 70) ? "C" : "D";
  cout << "\nScore is " << score << ", Result: " << result << endl;

  // 3. Ternary with multiple expressions
  int temperature = 28;
  string weather = (temperature > 30) ? "Hot" : ((temperature > 20) ? "Warm" : "Pleasant");
  cout << "Temperature is " << temperature << ", Weather: " << weather << endl;

  // 4. Ternary with string concatenation
  int count = 5;
  string message = (count > 0) ? "Count is " + to_string(count) : "Count is zero";
  cout << "\nCount is " << count << ", Message: " << message << endl;

  // 5.  Using ternary with functions
  int x = 10;
  int square = (x > 0) ? x * x : 0; // function call
  cout << "\nSquare of " << x << " is " << square << endl;

  return 0;
}

