#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  // 1. Do-While Loop
  int count = 5;
  do {
    cout << "Do-While Loop: Count = " << count << endl;
    count++;
  } while (count <= 10);

  cout << "\nDo-While loop finished." << endl;

  // 2. While Loop
  int number = 1;
  while (number <= 5) {
    cout << "While Loop: Number = " << number << endl;
    number++;
  }

  cout << "\nWhile loop finished." << endl;

  // Example: Getting user input until a valid number is entered
  int userInput;
  cout << "\nEnter a positive number (or enter -1 to exit): ";
  cin >> userInput;

  while (userInput != -1) {
    cout << "You entered: " << userInput << endl;
    cout << "Enter another positive number (or -1 to exit): ";
    cin >> userInput;
  }

  cout << "\nProgram exiting." << endl;

  return 0;
}

