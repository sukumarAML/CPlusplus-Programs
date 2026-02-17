#include <iostream>
#include <string>

class Rectangle {
private:
  int width;
  int height;

public:
  Rectangle(int w, int h) : width(w), height(h) {}

  int getArea() const {
    return width * height;
  }
};

// Friend function to print the rectangle's details
void printRectangleDetails(const Rectangle& rect) {
  std::cout << "Rectangle Details:" << std::endl;
  std::cout << "Width: " << rect.width << std::endl;
  std::cout << "Height: " << rect.height << std::endl;
  std::cout << "Area: " << rect.getArea() << std::endl;
}

int main() {
  Rectangle myRectangle(5, 10);

  // Call the friend function to print the rectangle details
  printRectangleDetails(myRectangle);

  return 0;
}

