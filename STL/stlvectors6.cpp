
#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> mySet;

  // Add elements
  mySet.insert(10);
  mySet.insert(5);
  mySet.insert(10); // Duplicate ignored!
  mySet.insert(20);

  // Iteration (Always sorted: 5, 10, 20)
  for (int num : mySet) {
      cout << num << " ";
  }
  
  // Check existence
  if (mySet.count(10)) {
      cout << "10 is in the set.";
  }

  return 0;
}
