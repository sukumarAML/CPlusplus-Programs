#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  // Declaration
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  
  // Add element
  cars.push_back("Tesla");
  
  // Remove last element
  cars.pop_back();

  // Access elements
  cout << "First: " << cars[0] << endl;           // Using index
  cout << "Second: " << cars.at(1) << endl;       // Using .at()
  cout << "Front: " << cars.front() << endl;      // First element
  cout << "Back: " << cars.back() << endl;        // Last element
  
  // Size check
  cout << "Size: " << cars.size() << endl;
  cout << "Is Empty? " << cars.empty() << endl;

  // Iteration
  for (string car : cars) {
      cout << car << " ";
  }
  
  return 0;
}