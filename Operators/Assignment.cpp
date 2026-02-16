#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  int a = 10;
  int b = 5;

  // 1. Simple Assignment (=)
  int x = a;
  cout << "Simple assignment (x = a): " << x << endl;

  // 2. Compound Assignment Operators
  //   - a += b  (a = a + b)
  a += b;
  cout << "Compound assignment (a += b): " << a << endl;

  //   - a -= b  (a = a - b)
  a -= b;
  cout << "Compound assignment (a -= b): " << a << endl;

  //   - a *= b  (a = a * b)
  a *= b;
  cout << "Compound assignment (a *= b): " << a << endl;

  //   - a /= b  (a = a / b)
  a /= b;
  cout << "Compound assignment (a /= b): " << a << endl;

  //   - a %= b  (a = a % b)
  a %= b;
  cout << "Compound assignment (a %= b): " << a << endl;

  //   - a ^= b  (a = a ^ b) - Bitwise XOR
  a ^= b;
  cout << "Compound assignment (a ^= b): " << a << endl;

  //   - a &= b  (a = a & b) - Bitwise AND
  a &= b;
  cout << "Compound assignment (a &= b): " << a << endl;

  //   - a |= b  (a = a | b) - Bitwise OR
  a |= b;
  cout << "Compound assignment (a |= b): " << a << endl;

  // 3. Shifting Operators
  //  - a <<= 2  (a = a << 2) - Left Shift
  a <<= 2;
  cout << "Compound assignment (a <<= 2): " << a << endl;

  //  - a >>= 1  (a = a >> 1) - Right Shift
  a >>= 1;
  cout << "Compound assignment (a >>= 1): " << a << endl;

  // 4. Ternary Operator (Conditional Assignment)
  int maxVal = (a > b) ? a : b;
  cout << "Max value (a > b): " << maxVal << endl;

  return 0;
}

