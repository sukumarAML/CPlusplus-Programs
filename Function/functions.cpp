#include <iostream>
#include <string>

using namespace std;

// 1. Function with no parameters and no return value
void printGreeting() {
  cout << "Hello, world!" << endl;
}

// 2. Function with integer parameters and no return value
void printInteger(int num) {
  cout << "The number is: " << num << endl;
}

// 3. Function with two integer parameters and a return value (int)
int add(int a, int b) {
  return a + b;
}

// 4. Function with a string parameter and a return value (string)
string concatenate(string str1, string str2) {
  return str1 + str2;
}

// 5. Function with a float parameter and a return value (float)
float square(float num) {
  return num * num;
}

int main() {
  // Calling the functions
  printGreeting(); // Calling a function with no parameters and no return value
  printInteger(10); // Calling a function with an integer parameter and no return value
  int sum = add(5, 3); // Calling a function with two integer parameters and a return value (int)
  cout << "Sum: " << sum << endl;

  string combinedString = concatenate("Hello, ", "C++");
  cout << "Combined string: " << combinedString << endl;

  float squaredValue = square(2.5);
  cout << "Squared value: " << squaredValue << endl;

  return 0;
}

