#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
  int dayOfWeek;

  cout << "Enter a day of the week (1-7): ";
  cin >> dayOfWeek;

  switch (dayOfWeek) {
    case 1:
      cout << "It's Monday!" << endl;
      break;
    case 2:
      cout << "It's Tuesday!" << endl;
      break;
    case 3:
      cout << "It's Wednesday!" << endl;
      break;
    case 4:
      cout << "It's Thursday!" << endl;
      break;
    case 5:
      cout << "It's Friday!" << endl;
      break;
    case 6:
      cout << "It's Saturday!" << endl;
      break;
    case 7:
      cout << "It's Sunday!" << endl;
      break;
    default:
      cout << "Invalid day of the week." << endl;
  }

  // Example using switch with a character
  char grade;
  cout << "\nEnter your grade (A, B, C, or D): ";
  cin >> grade;

  switch (grade) {
    case 'A':
      cout << "Excellent!" << endl;
      break;
    case 'B':
      cout << "Good job!" << endl;
      break;
    case 'C':
      cout << "Satisfactory." << endl;
      break;
    case 'D':
      cout << "Needs improvement." << endl;
      break;
    default:
      cout << "Invalid grade." << endl;
  }

  return 0;
}

