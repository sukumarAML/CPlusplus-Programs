#include <iostream>
#include <string>

class ComplexNumber {
private:
  double realPart;
  double imaginaryPart;

public:
  // Default constructor
  ComplexNumber() : realPart(0.0), imaginaryPart(0.0) {}

  // Parameterized constructor
  ComplexNumber(double real, double imag) : realPart(real), imaginaryPart(imag) {}

  // Operator overloading (+)
  ComplexNumber operator+(const ComplexNumber& other) const {
    return ComplexNumber(realPart + other.realPart, imaginaryPart + other.imaginaryPart);
  }

  // Operator overloading (-)
  ComplexNumber operator-(const ComplexNumber& other) const {
    return ComplexNumber(realPart - other.realPart, imaginaryPart - other.imaginaryPart);
  }

  // Operator overloading (*) - Scalar multiplication
  ComplexNumber operator*(double scalar) const {
    return ComplexNumber(realPart * scalar, imaginaryPart * scalar);
  }

  // Overloaded << operator for output
  friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& num) {
    os << num.realPart << (num.imaginaryPart > 0 ? "+" : "") << num.imaginaryPart << "i";
    return os;
  }
};

int main() {
  ComplexNumber num1(1.0, 2.0);
  ComplexNumber num2(3.0, 4.0);
  ComplexNumber num3(5.0, -6.0);

  // Using operator overloading
  ComplexNumber sum = num1 + num2;
  std::cout << "Sum: " << sum << std::endl;  // Output: Sum: 4.000000+6.000000i

  ComplexNumber diff = num1 - num2;
  std::cout << "Difference: " << diff << std::endl; // Output: Difference: -2.000000+2.000000i

  ComplexNumber product = num1 * 2.0;
  std::cout << "Product: " << product << std::endl; // Output: Product: 2.000000+4.000000i

  return 0;
}

