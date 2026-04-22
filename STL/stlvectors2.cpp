#include <iostream>
#include <list>
using namespace std;

int main() {
  list<string> cars = {"Volvo", "BMW"};

  // Insert at ends
  cars.push_front("Tesla");
  cars.push_back("VW");

  // Remove from ends
  cars.pop_front();
  cars.pop_back();

  // Iteration (Required since no index access)
  for (string car : cars) {
      cout << car << " ";
  }
  
  return 0;
}