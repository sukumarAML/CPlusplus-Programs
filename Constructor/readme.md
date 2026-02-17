# copy constructor
Key improvements and explanations:

Static Member Variable: static int staticCount; declares a static member variable of type int. Static members are shared by all objects of the class.
Static Constructor: The MyClass() constructor is designated as static by not having an object of the class as its parameter (i.e., (const MyClass& other) is removed). It is called once when the first object of the class is created. It initializes the staticCount. The std::cout statement demonstrates when the static constructor is called.
Copy Constructor: The MyClass(const MyClass& other) constructor is the copy constructor. It's called when an object is copied using the assignment operator or the copy constructor of another object. The std::cout statement demonstrates when the copy constructor is called. This implementation performs a shallow copy – meaning it only copies the pointer to the data member. For a deep copy, you'd need to duplicate the data member and its contents.
Destructor: The ~MyClass() destructor is called when an object is destroyed. The std::cout statement demonstrates when the destructor is called.
Initialization of Static Member: int MyClass::staticCount = 0; initializes the static member variable staticCount to 0. This is crucial; without initialization, the static variable would have an indeterminate value.
Demonstration in main(): The main() function creates instances of MyClass using both the default constructor and the copy constructor, demonstrating their respective invocations.
How to compile and run:

Save: Save the code as a .cpp file (e.g., static_copy_constructor.cpp).
Compile: Use a C++ compiler (like g++) to compile the code:
g++ static_copy_constructor.cpp -o static_copy_constructor
Run: Execute the compiled program:
./static_copy_constructor
The output will clearly show the calls to the static constructor, copy constructor, and destructor, along with the value of the static member variable. The order of these calls demonstrates the lifecycle of the objects. Note that shallow copies are not ideal for complex objects. For deeper copies, you’ll want to implement a deep copy. This example uses a simple string member to demonstrate the concept clearly.

# Destructor: \
# Key improvements and explanations:

MyClass Definition:
std::string data;: A private member variable data of type std::string is declared to store some data.
Constructor: The constructor MyClass(std::string d) : data(d) {} takes a std::string as input and initializes the data member with the input string. The : data(d) part is an initialization list, which is the preferred way to initialize member variables in C++.
Destructor: The destructor ~MyClass() {} is the core of this example. It's called automatically when an object of MyClass goes out of scope (i.e., when an object is destroyed). The std::cout statement demonstrates that the destructor is indeed called.
Copy Constructor: The copy constructor MyClass(const MyClass& other) : data(other.data) {} is responsible for creating a copy of an existing MyClass object. It takes a const MyClass& as input (a constant reference to avoid copying the object) and copies the value of the data member from the other object.
main() Function:
MyClass obj1("Hello");: An object obj1 of type MyClass is created, and the string "Hello" is passed to the constructor.
MyClass obj2(obj1);: An object obj2 of type MyClass is created using the copy constructor. This creates a copy of obj1.
return 0;: The main() function returns 0 to indicate successful execution. Because obj1 and obj2 are created within the main() function, they will automatically be destroyed when main() exits.
How to compile and run:

Save: Save the code as a .cpp file (e.g., destructor_example.cpp).
Compile: Use a C++ compiler (like g++) to compile the code:
g++ destructor_example.cpp -o destructor_example
Run: Execute the compiled program:
./destructor_example
The output will be:

Constructor called. Data: Hello
Constructor called. Data: Hello
Copy Constructor called. Data: Hello
Destructor called. Data: Hello
Destructor called. Data: Hello
This output clearly demonstrates the following sequence:

The constructor for obj1 is called when obj1 is created.
The constructor for obj2 is called when obj2 is created (using the copy constructor).
The destructor for obj2 is called when obj2 goes out of scope (at the end of the main() function).
The destructor for obj1 is called when obj1 goes out of scope (at the end of the main() function).
This shows the correct execution of the destructor, which is crucial for proper resource management (e.g., releasing memory, closing files, etc.). The order of destruction is the reverse of the order of creation, which is the default behavior in C++.

# Constructor overloading

Key improvements and explanations:

Class Rectangle: Defines a Rectangle class with length and width as private member variables.
Constructor Overloading: The program demonstrates constructor overloading by providing multiple constructors with different parameter lists.
Rectangle(): Default constructor, initializes length and width to 0.0.
Rectangle(double len, double wid): Constructor that takes both length and width as arguments.
Rectangle(double len): Constructor that takes only the length as an argument and initializes width to 0.0.
Initialization Lists: All constructors use initialization lists (: length(len), width(wid)) for efficient and correct initialization of member variables. This is generally preferred over assignment within the constructor body.
Copy Constructor: The copy constructor is implemented to handle deep copying of the Rectangle object's members.
calculateArea() Method: A simple method to calculate the area of the rectangle.
main() Function: Demonstrates the usage of the different constructors by creating instances of the Rectangle class with different arguments. The copy constructor is called when rect4 is initialized to copy rect2.
How to compile and run:

Save: Save the code as a .cpp file (e.g., constructor_overloading.cpp).
Compile: Use a C++ compiler (like g++) to compile the code:
g++ constructor_overloading.cpp -o constructor_overloading
Run: Execute the compiled program:
./constructor_overloading
The output will show the constructor calls for each Rectangle object that is created. This clearly demonstrates the concept of constructor overloading – the compiler chooses the appropriate constructor based on the type and number of arguments provided during object creation. The copy constructor is called when the copy constructor is invoked.

# Method overloading and operator overloading \
## Key improvements and explanations:

ComplexNumber Class: Defines a ComplexNumber class with realPart and imaginaryPart members.
Constructors: Includes a default constructor and a parameterized constructor. This allows you to initialize complex numbers in various ways.
*Operator Overloading (+, -, ): Overloads the addition (+), subtraction (-), and scalar multiplication (*) operators for ComplexNumber objects. Each operator definition uses the operator+, operator-, or operator* syntax. The const keyword is used to ensure that the original objects are not modified. const ComplexNumber& other is used for passing the other complex number object by constant reference to avoid unnecessary copying.
Overloaded << Operator: Overloads the << (output stream insertion) operator to allow the ComplexNumber object to be printed directly to the console using std::cout. The friend keyword is necessary because the function needs access to the private members of the ComplexNumber class. This operator returns the modified output stream object (os) for chaining.
main() Function: Creates two ComplexNumber objects, num1 and num2, and demonstrates the use of the overloaded operators to perform arithmetic operations and print the results.
How to compile and run:

Save: Save the code as a .cpp file (e.g., operator_overloading.cpp).
Compile: Use a C++ compiler (like g++) to compile the code:
g++ operator_overloading.cpp -o operator_overloading
Run: Execute the compiled program:
./operator_overloading
The output will demonstrate the use of operator overloading to perform arithmetic operations on ComplexNumber objects. The std::cout statements will print the results of the operations, showing the complex numbers in the form realPart + imaginaryPart i. This example clearly illustrates how operator overloading can make code more readable and intuitive when working with custom data types. The friend keyword is crucial for the << operator.
