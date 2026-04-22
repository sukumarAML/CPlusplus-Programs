
#include <iostream>
#include <vector>
#include <algorithm> // Required
using namespace std;

int main() {
  vector<int> numbers = {4, 2, 5, 1, 3};

  // Sort in ascending order
  // sort(start_iterator, end_iterator);
  sort(numbers.begin(), numbers.end());

  cout << "Sorted: ";
  for (int n : numbers) {
      cout << n << " ";
  }
  // Output: 1 2 3 4 5

  // Sort in descending order
  // sort(numbers.begin(), numbers.end(), greater<int>());

  return 0;
}
