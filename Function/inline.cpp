#include <iostream>
#include <vector>
#include <algorithm>

// 1. Simple Inline Function
int inline add(int a, int b) {
  return a + b;
}

// 2. Inline Function with Parameters
int inline multiply(int a, int b, int c) {
  return a * b * c;
}

// 3. Inline Function with a Vector and Standard Algorithm
int inline sum_vector(const std::vector<int>& nums) {
  return std::accumulate(nums.begin(), nums.end(), 0);
}

// 4. Inline Function with a Lambda Expression
int inline square(int x) {
    return std::function<int(int)>([](int a) { return a * a; })(x);
}



int main() {
  // Example 1: Simple Inline Function
  int result1 = add(5, 3);
  std::cout << "5 + 3 = " << result1 << std::endl;

  // Example 2: Inline Function with Parameters
  int result2 = multiply(2, 4, 6);
  std::cout << "2 * 4 * 6 = " << result2 << std::endl;

  // Example 3: Inline Function with a Vector and Standard Algorithm
  std::vector<int> numbers = {1, 2, 3, 4, 5};
  int result3 = sum_vector(numbers);
  std::cout << "Sum of vector elements = " << result3 << std::endl;

  // Example 4: Inline Function with Lambda
  int result4 = square(5);
  std::cout << "Square of 5 = " << result4 << std::endl;

  return 0;
}

