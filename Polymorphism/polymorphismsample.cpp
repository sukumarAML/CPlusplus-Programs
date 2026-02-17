#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Generic animal sound" << endl;
    }
};

// Derived classes
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound(); // Calls Dog's makeSound()
    animal2->makeSound(); // Calls Cat's makeSound()

    delete animal1;
    delete animal2;

    return 0;
}

