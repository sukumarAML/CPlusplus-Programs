#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  // Example 1: Right-angled triangle pattern
  cout << "\nRight-angled triangle pattern:" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  // Example 2: Inverted right-angled triangle pattern
  cout << "\nInverted Right-angled triangle pattern:" << endl;
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  // Example 3: Hollow square pattern
  cout << "\nHollow square pattern:" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == 1 || i == n || j == 1 || j == n) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  return 0;
}

