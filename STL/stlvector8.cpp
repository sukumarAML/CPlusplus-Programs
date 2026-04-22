#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> numbers = {10, 20, 30, 40, 50};

  // For-each loop
  for (int n : numbers) {
      cout << n << " ";
  }
  cout << endl;
  return 0;
}
