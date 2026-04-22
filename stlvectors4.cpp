#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<string> cars;

  // Add elements (Push)
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");

  // Access elements
  cout << "Front: " << cars.front() << endl; // Volvo
  cout << "Back: " << cars.back() << endl;   // Ford

  // Remove front element (Pop)
  cars.pop(); // Removes Volvo

  cout << "New Front: " << cars.front() << endl; // BMW

  return 0;
}