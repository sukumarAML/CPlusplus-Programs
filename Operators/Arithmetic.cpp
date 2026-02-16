#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  double num1 = 10.5;
  double num2 = 5.2;

  // 1. Addition (+)
  double sum = num1 + num2;
  cout << "Sum: " << sum << endl;

  // 2. Subtraction (-)
  double difference = num1 - num2;
  cout << "Difference: " << difference << endl;

  // 3. Multiplication (*)
  double product = num1 * num2;
  cout << "Product: " << product << endl;

  // 4. Division (/) - returns a double
  double quotient = num1 / num2;
  cout << "Quotient: " << quotient << endl;

  // 5. Modulus (%) - returns the remainder of the division
  double remainder = num1 % num2;
  cout << "Remainder: " << remainder << endl;

  // 6. Power (^) - Calculates num1 to the power of num2
  double power = pow(num1, num2);
  cout << "Power: " << power << endl;

  // 7. Bitwise AND (&)
  double bitAnd = num1 & num2;
  cout << "Bitwise AND: " << bitAnd << endl;

  // 8. Bitwise OR (|)
  double bitOr = num1 | num2;
  cout << "Bitwise OR: " << bitOr << endl;

  // 9. Bitwise XOR (^ )
  double bitXor = num1 ^ num2;
  cout << "Bitwise XOR: " << bitXor << endl;

  // 10. Left Shift (<<) - Shifts bits to the left by num2 positions
  double leftShift = num1 << 2; // Shifts num1 by 2 positions
  cout << "Left Shift: " << leftShift << endl;

  // 11. Right Shift (>>) - Shifts bits to the right by num2 positions
  double rightShift = num1 >> 1; // Shifts num1 by 1 position
  cout << "Right Shift: " << rightShift << endl;


  return 0;
}

