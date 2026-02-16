#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  bool x = true;
  bool y = false;
  bool z = true;

  cout << "x = " << x << " (Binary: " << bitset<4>(x) << ")" << endl;
  cout << "y = " << y << " (Binary: " << bitset<4>(y) << ")" << endl;
  cout << "z = " << z << " (Binary: " << bitset<4>(z) << ")" << endl;

  // 1. AND (&) - Logical AND
  bool andResult = x & y;
  cout << "\nAND Operation (x & y): " << andResult << " (Binary: " << bitset<4>(andResult) << ")" << endl;

  // 2. OR (|) - Logical OR
  bool orResult = x | y;
  cout << "\nOR Operation (x | y): " << orResult << " (Binary: " << bitset<4>(orResult) << ")" << endl;

  // 3. XOR (^ ) - Logical XOR
  bool xorResult = x ^ y;
  cout << "\nXOR Operation (x ^ y): " << xorResult << " (Binary: " << bitset<4>(xorResult) << ")" << endl;

  // 4. NOT (~) - Logical NOT
  bool notResult = ~x;
  cout << "\nNOT Operation (~x): " << notResult << " (Binary: " << bitset<4>(notResult) << ")" << endl;

  // 5. Logical AND with a literal (&&)
  bool andWithLiteral = x && y;
  cout << "\nLogical AND with literal (x && y): " << andWithLiteral << " (Binary: " << bitset<4>(andWithLiteral) << ")" << endl;

  // 6. Logical OR with a literal (||)
  bool orWithLiteral = x || y;
  cout << "\nLogical OR with literal (x || y): " << orWithLiteral << " (Binary: " << bitset<4>(orWithLiteral) << ")" << endl;

  // 7. Logical NOT with a literal (! )
  bool notWithLiteral = !x;
  cout << "\nLogical NOT with literal (!x): " << notWithLiteral << " (Binary: " << bitset<4>(notWithLiteral) << ")" << endl;

  // Combining operations
  bool combinedResult = (x & y) | (x ^ y);
  cout << "\nCombined Operation: " << combinedResult << " (Binary: " << bitset<4>(combinedResult) << ")" << endl;

  return 0;
}

