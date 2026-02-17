#include <iostream>
#include <string>

class Animal {
private:
  std::string name;
  std::string sound;

public:
  // Default constructor
  Animal() : name("Unknown"), sound("No sound") {}

  // Parameterized constructor
  Animal(std::string animalName, std::string animalSound)
      : name(animalName), sound(animalSound) {}

  // Setter methods
  void setName(std::string newName) { name = newName; }
  void setSound(std::string newSound) { sound = newSound; }

  // Getter methods
  std::string getName() const { return name; }
  std::string getSound() const { return sound; }

  // Virtual function to make the animal sound
  virtual void makeSound() const {
    std::cout << name << " says " << sound << std::endl;
  }
};

class Dog : public Animal {
private:
  // Add dog-specific attributes
  std::string breed;

public:
  // Parameterized constructor
  Dog(std::string dogName, std::string dogBreed)
      : Animal(dogName, "Woof!") , breed(dogBreed) {}

  // Override the makeSound function
  void makeSound() const override {
    std::cout << getName() << " barks " << breed << std::endl;
  }

  // Getter for the breed
  std::string getBreed() const { return breed; }
};

int main() {
  // Create an Animal object
  Animal animal1("Lion", "Roar!");
  std::cout << "Animal Name: " << animal1.getName() << std::endl;
  animal1.makeSound();

  // Create a Dog object
  Dog dog1("Buddy", "Golden Retriever");
  std::cout << "Dog Breed: " << dog1.getBreed() << std::endl;
  dog1.makeSound();

  // Demonstrate polymorphism - using a pointer to Animal
  Animal* animalPtr = &animal1;
  animalPtr->makeSound();

  Animal* dogPtr = &dog1;
  dogPtr->makeSound();

  return 0;
}

