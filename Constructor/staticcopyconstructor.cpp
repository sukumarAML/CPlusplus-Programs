#include <iostream>
#include <string>

class MyClass {
private:
  static int staticCount; // Static member variable

public:
  // Static Constructor
  MyClass() {
    staticCount++;
    std::cout << "Static constructor called for " << this << std::endl;
  }

  // Copy Constructor
  MyClass(const MyClass& other) {
    std::cout << "Copy constructor called for " << this << " from " << other << std::endl;
    // Deep copy logic would go here if necessary
  }

  // Destructor
  ~MyClass() {
    std::cout << "Destructor called for " << this << std::endl;
  }

  std::string data;
};

// Initialize the static member variable
int MyClass::staticCount = 0;

int main() {
  // Create an instance of MyClass
  MyClass obj1;

  // Create another instance of MyClass
  MyClass obj2(obj1); // Calls the copy constructor

  // Create another instance of MyClass
  MyClass obj3;

  std::cout << "Static count: " << MyClass::staticCount << std::endl;

  return 0;
}

