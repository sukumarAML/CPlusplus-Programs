
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
  vector<int> numbers = {10, 20, 30, 40};
  int target = 30;

  auto it = find(numbers.begin(), numbers.end(), target);

  if (it != numbers.end()) {
      cout << "Element found: " << *it << endl;
  } else {
      cout << "Element not found" << endl;
  }

  return 0;
}
