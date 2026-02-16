#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  int a = 10; // Binary: 1010
  int b = 6;  // Binary: 0110

  cout << "a = " << a << " (Binary: " << bitset<4>(a) << ")" << endl;
  cout << "b = " << b << " (Binary: " << bitset<4>(b) << ")" << endl;

  // 1. AND (&) - Bitwise AND
  int andResult = a & b;
  cout << "\nAND Operation (a & b): " << andResult << " (Binary: " << bitset<4>(andResult) << ")" << endl;

  // 2. OR (|) - Bitwise OR
  int orResult = a | b;
  cout << "\nOR Operation (a | b): " << orResult << " (Binary: " << bitset<4>(orResult) << ")" << endl;

  // 3. XOR (^ ) - Bitwise XOR
  int xorResult = a ^ b;
  cout << "\nXOR Operation (a ^ b): " << xorResult << " (Binary: " << bitset<4>(xorResult) << ")" << endl;

  // 4. NOT (~) - Bitwise NOT
  int notResult = ~a;
  cout << "\nNOT Operation (~a): " << notResult << " (Binary: " << bitset<4>(notResult) << ")" << endl;
  cout << "Not of a: " << (a == 0 ? "Negative Number" : "Positive Number") << endl;

  // 5. Left Shift (<<) - Shifts bits to the left
  int leftShift = a << 2; // Shift bits 2 positions to the left
  cout << "\nLeft Shift (a << 2): " << leftShift << " (Binary: " << bitset<4>(leftShift) << ")" << endl;

  // 6. Right Shift (>>) - Shifts bits to the right
  int rightShift = a >> 1; // Shift bits 1 position to the right
  cout << "\nRight Shift (a >> 1): " << rightShift << " (Binary: " << bitset<4>(rightShift) << ")" << endl;


  // Combining operations
  int combinedResult = (a & b) | (a ^ b);
  cout << "\nCombined Operation: " << combinedResult << " (Binary: " << bitset<4>(combinedResult) << ")" << endl;

  return 0;
}

