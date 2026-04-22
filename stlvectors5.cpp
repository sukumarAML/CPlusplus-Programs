#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<string> cars = {"Volvo", "BMW"};

  cars.push_back("Ford");  // Add to back
  cars.push_front("Tesla"); // Add to front
  
  // Iteration
  for (string car : cars) {
      cout << car << " ";
  }
  // Output: Tesla Volvo BMW Ford
  
  return 0;
}