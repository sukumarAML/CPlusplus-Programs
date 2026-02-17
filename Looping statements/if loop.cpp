#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  int age;

  cout << "Enter your age: ";
  cin >> age;

  // 1. Simple if
  if (age >= 18) {
    cout << "You are an adult." << endl;
  }

  // 2. Simple if-else
  if (age >= 18) {
    cout << "You are an adult." << endl;
  } else {
    cout << "You are a minor." << endl;
  }

  // 3. If-else if-else
  if (age >= 65) {
    cout << "You are a senior citizen." << endl;
  } else if (age >= 18) {
    cout << "You are an adult." << endl;
  } else if (age >= 13) {
    cout << "You are a teenager." << endl;
  } else {
    cout << "You are a child." << endl;
  }

  // Demonstrating multiple conditions
  int score = 85;
  if (score >= 90) {
      cout << "Grade: A" << endl;
  } else if (score >= 80) {
      cout << "Grade: B" << endl;
  } else if (score >= 70) {
      cout << "Grade: C" << endl;
  } else {
      cout << "Grade: D" << endl;
  }

  return 0;
}

