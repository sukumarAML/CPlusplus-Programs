
#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> people;

  // Insert elements
  people["Alice"] = 25;
  people["Bob"] = 30;
  people["Charlie"] = 22;

  // Access value by key
  cout << "Alice's age: " << people["Alice"] << endl;

  // Iteration
  for (auto const& [name, age] : people) {
      cout << name << ": " << age << endl;
  }

  return 0;
}
