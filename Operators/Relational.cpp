#include <iostream>
#include <iomanip> // For setting precision
#include <string>

using namespace std;

int main() {
  int a = 10;
  int b = 5;
  double d = 7.5;

  cout << "a = " << a << ", b = " << b << ", d = " << d << endl;

  // 1. Equal to (==)
  bool equalResult = a == b;
  cout << "\nEqual To (a == b): " << equalResult << " (Binary: " << bitset<4>(equalResult) << ")" << endl;

  // 2. Not Equal To (!=)
  bool notEqualResult = a != b;
  cout << "\nNot Equal To (a != b): " << notEqualResult << " (Binary: " << bitset<4>(notEqualResult) << ")" << endl;

  // 3. Greater Than (>)
  bool greaterResult = a > b;
  cout << "\nGreater Than (a > b): " << greaterResult << " (Binary: " << bitset<4>(greaterResult) << ")" << endl;

  // 4. Less Than (<)
  bool lessResult = a < b;
  cout << "\nLess Than (a < b): " << lessResult << " (Binary: " << bitset<4>(lessResult) << ")" << endl;

  // 5. Greater Than or Equal To (>=)
  bool greaterOrEqualResult = a >= b;
  cout << "\nGreater Than or Equal To (a >= b): " << greaterOrEqualResult << " (Binary: " << bitset<4>(greaterOrEqualResult) << ")" << endl;

  // 6. Less Than or Equal To (<=)
  bool lessOrEqualResult = a <= b;
  cout << "\nLess Than or Equal To (a <= b): " << lessOrEqualResult << " (Binary: " << bitset<4>(lessOrEqualResult) << ")" << endl;

  // Combining relational operators
  bool combinedResult = (a > 5) && (b < 10);
  cout << "\nCombined Operation: " << combinedResult << " (Binary: " << bitset<4>(combinedResult) << ")" << endl;

  return 0;
}

