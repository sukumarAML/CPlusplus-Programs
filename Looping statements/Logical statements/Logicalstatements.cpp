#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  int num;

  cout << "Enter an integer: ";
  cin >> num;

  // 1. Simple if statement within a loop
  cout << "\nSimple if statement inside a loop:" << endl;
  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      cout << i << " is even." << endl;
    }
  }

  // 2. if-else statement within a loop
  cout << "\nif-else statement inside a loop:" << endl;
  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      cout << i << " is even." << endl;
    } else {
      cout << i << " is odd." << endl;
    }
  }

  // 3. Multiple if-else if-else statements within a loop
  cout << "\nMultiple if-else if-else statements inside a loop:" << endl;
  for (int i = 1; i <= 10; i++) {
    if (i == 1) {
      cout << i << " is the first number." << endl;
    } else if (i == 5) {
      cout << i << " is the fifth number." << endl;
    } else {
      cout << i << " is a number." << endl;
    }
  }

  // 4. Using logical AND (&) in a loop
  cout << "\nUsing logical AND (&) in a loop:" << endl;
  for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0 && i % 3 == 0) {
      cout << i << " is divisible by both 2 and 3." << endl;
    }
  }

  // 5. Using logical OR (|) in a loop
  cout << "\nUsing logical OR (|) in a loop:" << endl;
  for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0 || i % 3 == 0) {
      cout << i << " is divisible by 2 or 3." << endl;
    }
  }

  return 0;
}

