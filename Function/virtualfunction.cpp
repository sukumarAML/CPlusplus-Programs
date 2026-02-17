#include <iostream>

class Shape {
public:
  // Pure virtual function:  This makes Shape an abstract class
  virtual double calculateArea() const = 0;

  // A regular (non-virtual) function - this is allowed in an abstract class
  void displayShape() const {
    std::cout << "This is a shape." << std::endl;
  }
};

class Circle : public Shape {
public:
  Circle(double radius) : radius_(radius) {}

  // Override the pure virtual function
  double calculateArea() const override {
    return 3.14159 * radius_ * radius_;
  }

private:
  double radius_;
};

class Square : public Shape {
public:
  Square(double side) : side_(side) {}

  // Override the pure virtual function
  double calculateArea() const override {
    return side_ * side_;
  }

private:
  double side_;
};

int main() {
  // Shape s; // Error: Cannot instantiate an abstract class
  Circle c(5.0);
  Square sq(4.0);

  std::cout << "Area of Circle: " << c.calculateArea() << std::endl;
  std::cout << "Area of Square: " << sq.calculateArea() << std::endl;

  // c.displayShape(); // Error: calculateArea is pure virtual, so no default implementation.
  // sq.displayShape(); // Error: calculateArea is pure virtual, so no default implementation.

  return 0;
}

