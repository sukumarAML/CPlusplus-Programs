
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  // Array with duplicates
  vector<int> input = {1, 2, 2, 3, 4, 4, 4, 5, 1, 6};
  
  // Set automatically removes duplicates and sorts them
  set<int> uniqueNumbers(input.begin(), input.end());

  for (int n : uniqueNumbers) {
      cout << n << " ";
  }
  // Output: 1 2 3 4 5 6
  return 0;
}
