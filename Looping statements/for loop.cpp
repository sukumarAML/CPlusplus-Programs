#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  // 1. Basic for loop: Prints numbers from 1 to 10
  cout << "Basic for loop (1 to 10):" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << i << " ";
  }
  cout << endl;

  // 2. for loop with different initialization, condition, and increment
  cout << "\nfor loop with different parameters:" << endl;
  for (int i = 5; i >= 1; i--) {
    cout << i << " ";
  }
  cout << endl;

  // 3. for loop with a step value other than 1
  cout << "\nfor loop with step value 2:" << endl;
  for (int i = 0; i <= 8; i += 2) {
    cout << i << " ";
  }
  cout << endl;

  // 4. Nested for loop: Prints a multiplication table
  cout << "\nNested for loop (Multiplication table):" << endl;
  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 6; j++) {
      cout << i * j << " ";
    }
    cout << endl; // Newline after each row
  }

  // 5. for loop with break statement:
  cout << "\nfor loop with break:" << endl;
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      break; // Exit the loop when i is 5
    }
    cout << i << " ";
  }
  cout << endl;

  return 0;
}

