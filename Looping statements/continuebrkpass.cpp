#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  // 1. continue statement
  cout << "Continue Statement:" << endl;
  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) { // If i is even
      continue;      // Skip the rest of the current iteration
    }
    cout << i << " ";
  }
  cout << endl;

  // 2. break statement
  cout << "\nBreak Statement:" << endl;
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      break; // Exit the loop when i is 5
    }
    cout << i << " ";
  }
  cout << endl;

  // 3. goto statement (Use with caution - can make code difficult to understand)
  cout << "\nGoto Statement:" << endl;
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      goto end; // Jump to the label 'end'
    }
    cout << i << " ";
  }
  cout << endl;

  end: // Label for the goto statement
  cout << "Reached the end of the loop." << endl;

  return 0;
}

