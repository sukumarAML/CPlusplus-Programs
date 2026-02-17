#include <iostream>
#include <string>

// 1. Abstract Class Example
// The abstract class 'Shape' defines a common interface
// for all shapes, but doesn't provide a complete implementation.
// Derived classes must implement the 'calculateArea' method.

// Abstract Class
class Shape {
public:
  // Pure virtual function:  This makes Shape an abstract class
  virtual double calculateArea() const = 0;

  // A regular (non-virtual) function - this is allowed in an abstract class
  virtual void displayShape() const {
    std::cout << "This is a shape." << std::endl;
  }

  // Virtual destructor:  Important for proper cleanup when deleting derived objects
  virtual ~Shape() {}
};

// Concrete Class (Derived from Shape)
class Circle : public Shape {
public:
  Circle(double radius) : radius_(radius) {}

  // Override the pure virtual function
  double calculateArea() const override {
    return 3.14159 * radius_ * radius_;
  }

  // Override the displayShape method (optional)
  void displayShape() const override {
    std::cout << "Circle with radius " << radius_ << std::endl;
  }

private:
  double radius_;
};

// Concrete Class (Derived from Shape)
class Square : public Shape {
public:
  Square(double side) : side_(side) {}

  // Override the pure virtual function
  double calculateArea() const override {
    return side_ * side_;
  }

  // Override the displayShape method (optional)
  void displayShape() const override {
    std::cout << "Square with side " << side_ << std::endl;
  }

private:
  double side_;
};

int main() {
  // Shape s; // Error: Cannot instantiate an abstract class
  Circle c(5.0);
  Square sq(4.0);

  // Polymorphism:  We can treat Circle and Square objects uniformly
  // through a Shape pointer
  Shape* shapePtr;

  shapePtr = &c;
  shapePtr->displayShape();  // Calls Circle's displayShape()
  std::cout << "Area of Circle: " << shapePtr->calculateArea() << std::endl;

  shapePtr = &sq;
  shapePtr->displayShape();  // Calls Square's displayShape()
  std::cout << "Area of Square: " << shapePtr->calculateArea() << std::endl;

  // Demonstrating the virtual destructor:
  // delete shapePtr;  // This is safe because of the virtual destructor
  // Alternatively, we can delete the specific derived objects:
  // delete &c;
  // delete &sq;

  return 0;
}

