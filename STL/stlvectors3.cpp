#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<string> cars;

  // Add elements (Push)
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");

  // Access top element
  cout << "Top: " << cars.top() << endl; // Ford

  // Remove top element (Pop)
  cars.pop(); // Removes Ford

  cout << "New Top: " << cars.top() << endl; // BMW
  cout << "Size: " << cars.size() << endl;

  return 0;
}