#include <iostream>
#include <cmath>
#include <functional> // For std::function
#include <algorithm> // For std::transform

// 1. Function with Default Arguments
int power(int base, int exponent = 2) {
  return pow(base, exponent);
}

// 2. Function with Variable Number of Arguments (Variadic Function)
template <typename... Args>
void print_args(Args... args) {
  (std::cout << ... << args) << std::endl;
}

// 3. Function with Return Type Function
int calculate(int x, int y) {
  return std::function<int(int, int)>( [x, y](int a, int b) { return a + b; });
}

// 4. Function Using `std::function` for Flexibility
int multiply(std::function<int(int, int)> func, int a, int b) {
  return func(a, b);
}

// 5. Function Using Lambda Expressions
int sum_of_squares(const std::vector<int>& nums) {
  return std::transform(nums.begin(), nums.end(), 0, [](int x) { return x * x; });
}

// 6. Function with Recursion
int factorial(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * factorial(n - 1);
}


int main() {
  // 1. Default Argument Example
  std::cout << "2^2: " << power(2) << std::endl;
  std::cout << "3^3: " << power(3, 3) << std::endl;

  // 2. Variadic Function Example
  print_args(1, 2, 3);          // Output: 1 2 3
  print_args(1, 2, 3, 4, 5);  // Output: 1 2 3 4 5

  // 3. Return Type Function Example
  auto sum = calculate(5, 3);
  std::cout << "Sum: " << sum << std::endl;

  // 4. Function with std::function Example
  auto product = multiply([](int a, int b) { return a * b; }, 4, 5);
  std::cout << "Product: " << product << std::endl;

  // 5. Function with Lambda Example
  std::vector<int> numbers = {1, 2, 3, 4, 5};
  std::cout << "Sum of squares: " << sum_of_squares(numbers) << std::endl;

  // 6. Function with Recursion Example
  std::cout << "Factorial of 5: " << factorial(5) << std::endl;

  return 0;
}

