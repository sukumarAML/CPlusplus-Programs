#include <iostream>
#include <string>

class MyClass {
private:
  std::string data;

public:
  // Constructor
  MyClass(std::string d) : data(d) {
    std::cout << "Constructor called. Data: " << data << std::endl;
  }

  // Destructor
  ~MyClass() {
    std::cout << "Destructor called. Data: " << data << std::endl;
  }

  // Copy Constructor
  MyClass(const MyClass& other) : data(other.data) {
    std::cout << "Copy Constructor called. Data: " << data << std::endl;
  }
};

int main() {
  // Create an object
  MyClass obj1("Hello");

  // Create another object (using the copy constructor)
  MyClass obj2(obj1);

  // Now, the objects are destroyed
  return 0;
}

