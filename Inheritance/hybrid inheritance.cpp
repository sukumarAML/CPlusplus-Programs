#include <iostream>
#include <string>

// Base class
class Animal {
protected:
  std::string name;

public:
  Animal(const std::string& name) : name(name) {}

  virtual void makeSound() {
    std::cout << "Generic animal sound" << std::endl;
  }

  virtual std::string getName() const {
    return name;
  }
};

// Derived class 1
class Dog : public Animal {
public:
  Dog(const std::string& name) : Animal(name) {}

  void makeSound() override {
    std::cout << "Woof!" << std::endl;
  }

  std::string getName() const override {
    return "Dog: " + Animal::getName();
  }
};

// Derived class 2
class Cat : public Animal {
public:
  Cat(const std::string& name) : Animal(name) {}

  void makeSound() override {
    std::cout << "Meow!" << std::endl;
  }

  std::string getName() const override {
    return "Cat: " + Animal::getName();
  }
};

// Derived class 3 (Hybrid Inheritance) - Bulldog inherits from Dog and Cat
class Bulldog : public Dog, public Cat {
public:
  Bulldog(const std::string& name) : Dog(name), Cat(name) {} // Initialize both base classes

  void makeSound() override {
    std::cout << "Grrr! (Bulldog)" << std::endl;
  }
};


int main() {
  Dog dog("Buddy");
  Cat cat("Whiskers");
  Bulldog bulldog("Max");

  dog.makeSound();
  cat.makeSound();
  bulldog.makeSound();

  std::cout << dog.getName() << std::endl;
  std::cout << cat.getName() << std::endl;
  std::cout << bulldog.getName() << std::endl;


  // Demonstrating Polymorphism with a mixed array
  Animal* animals[3];
  animals[0] = &dog;
  animals[1] = &cat;
  animals[2] = &bulldog;

  for (int i = 0; i < 3; ++i) {
    std::cout << animals[i]->getName() << " says: ";
    animals[i]->makeSound();
  }

  return 0;
}

