#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  // 1. Declare and initialize an array of integers
  int numbers[5] = {10, 20, 30, 40, 50};

  // 2. Print the array elements
  cout << "Array elements:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;

  // 3. Calculate the sum of array elements
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += numbers[i];
  }
  cout << "\nSum of array elements: " << sum << endl;

  // 4. Find the maximum element
  int max_element = numbers[0];
  for (int i = 1; i < 5; i++) {
    if (numbers[i] > max_element) {
      max_element = numbers[i];
    }
  }
  cout << "Maximum element: " << max_element << endl;

  // 5. Search for a specific element (e.g., 30)
  int search_value = 30;
  bool found = false;
  for (int i = 0; i < 5; i++) {
    if (numbers[i] == search_value) {
      found = true;
      break; // Exit the loop once found
    }
  }
  if (found) {
    cout << "\n" << search_value << " found in the array." << endl;
  } else {
    cout << "\n" << search_value << " not found in the array." << endl;
  }

  return 0;
}

