# Abstract Class

Key improvements and explanations:

Abstract Class (Shape): This is defined as an abstract class because it contains a pure virtual function (calculateArea()). This means you cannot create instances of the Shape class directly.
Pure Virtual Function: The calculateArea() function is declared as virtual double calculateArea() const = 0;. This makes it a pure virtual function, meaning derived classes must implement it.
Override Keyword: The derived classes (Circle and Square) use the override keyword to explicitly indicate that they are overriding the calculateArea() function from the base class. This helps the compiler catch errors if you make a mistake in the function signature (e.g., incorrect parameter list).
displayShape() Function: This is a regular (non-virtual) function that's allowed in an abstract class. It's a useful method for displaying information about the shape. Also overridden in the derived classes.
Virtual Destructor: virtual ~Shape() {} This is crucial. When you delete a pointer to a base class object that points to a derived class object, the virtual destructor ensures that the derived class's destructor is called before the base class's destructor. This is important for proper cleanup and resource management. Without a virtual destructor, only the base class's destructor would be called, potentially leading to memory leaks or other issues.
Polymorphism: The main() function demonstrates polymorphism. You can create pointers or references to base class objects and use them to access members of derived class objects. This works because the calculateArea() function is virtual, so the correct implementation is called based on the actual type of the object being pointed to.
Deleting Objects: The commented-out code demonstrates how to safely delete objects that are pointed to by a base class pointer. The virtual destructor is key here to ensure correct cleanup.
How Abstract Classes and Polymorphism Work

Blueprint: An abstract class serves as a blueprint or template for derived classes. It defines the common interface (the pure virtual functions) that all derived classes must implement.

Polymorphism: Polymorphism allows you to treat objects of different classes uniformly through a base class pointer or reference. This is made possible by the virtual keyword in the base class.

Flexibility: Abstract classes provide a flexible way to design your code, allowing you to add new shapes or shapes with different calculation methods without modifying existing code.

Abstraction: They promote abstraction by hiding the implementation details of the derived classes. You only need to know the interface (the pure virtual functions) to use the base class.

This program thoroughly demonstrates the concepts of abstract classes and polymorphism in C++. The virtual destructor is an important detail to understand when working with polymorphism and derived classes.
