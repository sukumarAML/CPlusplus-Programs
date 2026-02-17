#include <iostream>
#include <string>
#include <iomanip> // For setting precision

using namespace std;

// Define a structure
struct Student {
  string name;
  int rollNumber;
  float marks;
};

int main() {
  // Create an instance (object) of the structure
  Student student1;

  // Assign values to the structure members
  student1.name = "Alice Smith";
  student1.rollNumber = 12345;
  student1.marks = 85.5;

  // Print the structure members
  cout << "Student Name: " << student1.name << endl;
  cout << "Roll Number: " << student1.rollNumber << endl;
  cout << "Marks: " << student1.marks << endl;

  // Create another instance
  Student student2;
  student2.name = "Bob Johnson";
  student2.rollNumber = 67890;
  student2.marks = 92.0;

  // Print the second student's information
  cout << "\nStudent Name: " << student2.name << endl;
  cout << "Roll Number: " << student2.rollNumber << endl;
  cout << "Marks: " << student2.marks << endl;

  return 0;
}

