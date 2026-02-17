#include <iostream>
#include <string>
#include <iomanip> // For setting precision

using namespace std;

class Rectangle {
private:
  double length;
  double width;

public:
  // Default constructor
  Rectangle() : length(0.0), width(0.0) {
    cout << "Default constructor called" << endl;
  }

  // Constructor with length and width
  Rectangle(double len, double wid) : length(len), width(wid) {
    cout << "Constructor called with length " << len << " and width " << wid << endl;
  }

  // Constructor with just length
  Rectangle(double len) : length(len), width(0.0) {
    cout << "Constructor called with length " << len << " and width initialized to 0" << endl;
  }

  // Copy constructor
  Rectangle(const Rectangle& other) : length(other.length), width(other.width) {
    cout << "Copy constructor called" << endl;
  }

  double calculateArea() {
    return length * width;
  }
};

int main() {
  Rectangle rect1;             // Calls the default constructor
  Rectangle rect2(5.0, 10.0);  // Calls the constructor with length and width
  Rectangle rect3(7.0);        // Calls the constructor with just length
  Rectangle rect4 = rect2;     // Calls the copy constructor

  cout << "Area of rect1: " << rect1.calculateArea() << endl;
  cout << "Area of rect2: " << rect2.calculateArea() << endl;
  cout << "Area of rect3: " << rect3.calculateArea() << endl;
  cout << "Area of rect4: " << rect4.calculateArea() << endl;

  return 0;
}

