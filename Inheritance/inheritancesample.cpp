#include <iostream>
#include <string>
#include <iomanip> // For setting precision

using namespace std;

// Base class: Animal
class Animal {
public:
  // Constructor
  Animal(string name, string sound) : name_(name), sound_(sound) {}

  // Virtual function:  Allows derived classes to override
  virtual void makeSound() {
    cout << sound_ << endl;
  }

protected:
  string name_;
  string sound_;
};

// Derived class: Dog (inherits from Animal)
class Dog : public Animal {
public:
  // Constructor:  Calls the base class constructor
  Dog(string name, string breed) : Animal(name, "Woof!") {
    breed_ = breed;
  }

  // Override the makeSound() function
  void makeSound() override {
    cout << sound_ << " " << breed_ << " says " << "Woof!" << endl;
  }

private:
  string breed_;
};

// Derived class: Cat (inherits from Animal)
class Cat : public Animal {
public:
  // Constructor
  Cat(string name, string color) : Animal(name, "Meow!") {
    color_ = color;
  }

  // Override the makeSound() function
  void makeSound() override {
    cout << sound_ << " " << color_ << " cat says " << "Meow!" << endl;
  }

private:
  string color_;
};

int main() {
  // Create objects of the derived classes
  Dog myDog("Buddy", "Golden Retriever");
  Cat myCat("Whiskers", "Gray");

  // Call the makeSound() method on each object
  myDog.makeSound();
  myCat.makeSound();

  return 0;
}

