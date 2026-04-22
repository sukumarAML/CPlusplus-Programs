
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  
  // Create an iterator
  // Syntax: container_type::iterator iterator_name;
  vector<string>::iterator it;
  
  // Iterate through the vector
  //Using auto simplifies the iterator declaration.
  for (auto it = cars.begin(); it != cars.end(); it++) {
      cout << *it << " "; // Dereference iterator to get value
  }
  
  return 0;
}
