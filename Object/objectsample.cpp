#include <iostream>
#include <string>
#include <iomanip> // For setting precision

using namespace std;

// Define a class named "Dog"
class Dog {
public:
  // Constructor:  Called when a Dog object is created
  Dog(string name, int age) : name_(name), age_(age) {}

  // Method to display the dog's information
  void bark() {
    cout << "Woof! My name is " << name_ << " and I am " << age_ << " years old." << endl;
  }

private:
  string name_;  // Dog's name
  int age_;     // Dog's age
};

int main() {
  // Create two Dog objects
  Dog dog1("Buddy", 3);
  Dog dog2("Lucy", 5);

  // Access the dog's attributes and call their methods
  cout << "Dog 1:" << endl;
  dog1.bark();
  cout << "Dog 1's name: " << dog1.name_ << endl;
  cout << "Dog 1's age: " << dog1.age_ << endl;

  cout << "\nDog 2:" << endl;
  dog2.bark();
  cout << "Dog 2's name: " << dog2.name_ << endl;
  cout << "Dog 2's age: " << dog2.age_ << endl;

  return 0;
}

