#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a class named "Person"
class Person {
private:
  string name;
  int age;

public:
  // Constructor
  Person(string name, int age) : name(name), age(age) {}

  // Getter methods (accessors)
  string getName() const { return name; }
  int getAge() const { return age; }

  // Setter methods (mutators)
  void setName(string name) { this->name = name; }
  void setAge(int age) { this->age = age; }

  // Method to display person's information
  void displayInfo() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

int main() {
  // Create instances (objects) of the Person class
  Person person1("Alice", 30);
  Person person2("Bob", 25);

  // Access and modify object properties
  person1.displayInfo();  // Output: Name: Alice, Age: 30
  person1.setAge(31);
  person1.setName("Alice Smith");
  cout << "\nUpdated information for Alice:" << endl;
  person1.displayInfo(); // Output: Name: Alice Smith, Age: 31

  // Create a vector to store Person objects
  vector<Person> people;
  people.push_back(person1);
  people.push_back(person2);

  // Iterate through the vector and display information for each person
  cout << "\nInformation for all people:" << endl;
  for (const auto& person : people) {
    person.displayInfo();
  }

  return 0;
}

