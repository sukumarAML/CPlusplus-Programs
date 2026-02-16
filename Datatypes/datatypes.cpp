#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

int main() {
  // 1. Integer Types
  int intValue = 10;
  cout << "Integer Type (int): " << intValue << endl;

  short shortValue = 32767;
  cout << "Short Type (short): " << shortValue << endl;

  long long longValue = 9876543210;
  cout << "Long Type (long): " << longValue << endl;

  long long longValue2 = 2147483648;
  cout << "Long Long Type (long long): " << longValue2 << endl;



  // 2. Floating-Point Types
  float floatValue = 3.14f;
  cout << "\nFloating-Point Type (float): " << floatValue << endl;

  double doubleValue = 2.71828;
  cout << "Floating-Point Type (double): " << doubleValue << endl;

  // 3. Character Type
  char charValue = 'A';
  cout << "\nCharacter Type (char): " << charValue << endl;

  // 4. Boolean Type (C++11 and later)
  bool boolValue = true;
  cout << "Boolean Type (bool): " << boolValue << endl;

  // 5. Using different types together
  int intSum = 5;
  float floatSum = 2.5f;
  double doubleSum = intSum + floatSum;
  cout << "\nCombining Types:" << endl;
  cout << "  intSum: " << intSum << endl;
  cout << "  floatSum: " << floatSum << endl;
  cout << "  doubleSum: " << doubleSum << endl;


  // 6.  Size of data types (demonstration - requires compiler support)
  cout << "\nSize of data types:" << endl;
  cout << "  int: " << sizeof(int) << " bytes" << endl;
  cout << "  short: " << sizeof(short) << " bytes" << endl;
  cout << "  float: " << sizeof(float) << " bytes" << endl;
  cout << "  double: " << sizeof(double) << " bytes" << endl;
  cout << "  char: " << sizeof(char) << " bytes" << endl;

  return 0;
}

