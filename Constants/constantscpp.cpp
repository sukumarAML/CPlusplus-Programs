#include <iostream>
#include <iomanip>  // For setting precision

using namespace std;

int main() {
  // 1. Integer Constants
  int maxInt = INT_MAX;
  int minInt = INT_MIN;
  cout << "Integer Constants:" << endl;
  cout << "  Maximum integer value: " << maxInt << endl;
  cout << "  Minimum integer value: " << minInt << endl;
  cout << fixed << setprecision(20); // Set precision for large integer output

  // 2. Floating-Point Constants
  double pi = M_PI;  // M_PI is a predefined constant
  float e = M_E;    // M_E is a predefined constant
  cout << "\nFloating-Point Constants:" << endl;
  cout << "  Pi: " << pi << endl;
  cout << "  e: " << e << endl;

  // 3. Character Constants
  char newline = '\n';
  char quote = 34;
  cout << "\nCharacter Constants:" << endl;
  cout << "  Newline character: " << newline << endl;
  cout << "  Quote character: " << quote << endl;

  // 4. String Constants (C-style strings)
  const char* message = "Hello, World!";
  cout << "\nString Constants (C-style):" << endl;
  cout << "  Message: " << message << endl;

  // 5. Boolean Constants (C++11 and later)
  bool isTrue = true;
  bool isFalse = false;
  cout << "\nBoolean Constants (C++11 and later):" << endl;
  cout << "  True: " << isTrue << endl;
  cout << "  False: " << isFalse << endl;


  // 6.  Combining Constants
  int count = 5;
  double average = (double)count / 2.0;  // Cast to double for accurate division
  cout << "\nCombining Constants:" << endl;
  cout << "  Count: " << count << endl;
  cout << "  Average: " << average << endl;


  return 0;
}

