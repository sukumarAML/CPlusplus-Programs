#include <iostream>
#include <string>

class Animal {
public:
  void eat() {
    std::cout << "Animal is eating." << std::endl;
  }
};

class Swimmer : public Animal {
public:
  void swim() {
    std::cout << "Swimmer is swimming." << std::endl;
  }
};

class Diver : public Animal {
public:
  void dive() {
    std::cout << "Diver is diving." << std::endl;
  }
};

class DiverSwimmer : public Diver, public Swimmer {
public:
  void performActivity() {
    eat();
    swim();
    dive();
  }
};

int main() {
  DiverSwimmer diverSwimmer;
  diverSwimmer.performActivity(); // Calls all three methods (eat, swim, dive)

  return 0;
}

