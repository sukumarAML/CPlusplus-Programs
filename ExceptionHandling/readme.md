# Exception handling in C++
It is a particular condition for developers to handle. In programming, committing mistakes that prompt unusual conditions called errors is normal. All in all, these errors are of three kinds:

1.Syntax Error
2.Logical Error 
3.Runtime Error

# What is Exception Handling in C++? 

Exception handling in C++ is a mechanism that allows a program to deal with runtime errors and exceptional situations in a structured and controlled manner. In C++, exceptions are used to handle errors that occur during the execution of a program, such as division by zero, accessing invalid memory, or file I/O errors.

The basic idea behind exception handling is to separate the normal flow of program execution from error-handling code. Instead of terminating the program abruptly when an error occurs, C++ provides a way to "throw" an exception, representing the error or exceptional condition. The thrown exception is then caught by appropriate "catch" blocks, where the program can handle the error gracefully.

# Here's a basic outline of how exception handling works in C++:

# Throwing an Exception:
When a critical error occurs during program execution, you can use the throw statement to raise an exception. It usually takes an object as an argument, which serves as the representation of the error.
#include <iostream>
void someFunction(int value) {
    if (value == 0)
        throw std::runtime_error("Error: Division by zero!");
    // ... other code ...
}
# Catching an Exception:
To catch an exception, you use a try block. The code that might raise an exception is placed inside the try block. If an exception is thrown within the try block, the program will immediately jump to the corresponding catch block.

int main() {
    try {
        int x = 10;
        int y = 0;
        someFunction(x / y);
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    // ... other code ...
    return 0;
}
# Handling the Exception:
The catch block handles the caught exception. It specifies the type of exception it can catch in parentheses, followed by a block of code that handles the exceptional condition.
Multiple Catch Blocks:
You can have multiple catch blocks to handle different types of exceptions. The first catch block that matches the thrown exception's type will be executed, and the others will be skipped.
try {
    // code that may throw exceptions
} catch (const SomeExceptionType& e) {
    // handle SomeExceptionType
} catch (const AnotherExceptionType& e) {
    // handle AnotherExceptionType
} catch (...) {
    // handle any other exception that is not caught by previous catch blocks
}
# Exception Safety:
Exception safety refers to the concept of ensuring that a program's state remains consistent even if an exception is thrown. Writing exception-safe code is essential to prevent resource leaks and maintain data integrity.
By using exception handling, you can make your C++ programs more robust and maintainable, as they provide a way to handle errors in a controlled manner, rather than having the program terminate abruptly on encountering an issue.

When no exception condition happens, the code will execute ordinarily. The handlers will be disregarded.

A simple example to understand Exceptional handling in C++

#include <iostream>

int main() {
    try {
        // Code that may throw an exception
        int numerator = 10;
        int denominator = 0;
        int result = numerator / denominator;

        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }

    return 0;
}
In this example, the division operation numerator/denominator may throw a std::exception when the denominator is zero. The try block contains the code that might throw an exception, and the catch block catches the exception and handles it appropriately.
Why Exception Handling? 

Exception handling is a crucial concept in programming that allows developers to deal with unexpected or exceptional situations that may occur during the execution of a program. These exceptional situations are often referred to as "exceptions." Here are some reasons why exception handling is important:

* Error Management: When a program encounters an error or unexpected condition, without exception handling, it might crash or produce incorrect results. Exception handling provides a structured way to deal with errors and allows developers to handle them gracefully.
* Robustness: Exception handling enhances the robustness of the software. By catching and handling exceptions, developers can prevent the entire program from terminating abruptly and provide users with meaningful error messages, making the software more user-friendly.
* Separation of Concerns: Exception handling clearly separates normal program flow and error running code. This separation makes the code easier to read, understand, and maintain.
* Debugging: Exception handling aids in debugging the code. When an exception is thrown, the program can log details about the error, which helps developers identify and fix the issue's root cause.
* Graceful Recovery: In certain cases, programs can recover from exceptions and continue execution instead of crashing. For example, a web server can catch an exception caused by a client-side error and respond with an appropriate HTTP error code instead of shutting down.
* Program Stability: By handling exceptions appropriately, developers can ensure that the program remains stable and reliable even when facing unexpected conditions or inputs.
* Fail-Safe Operations: Exception handling is especially important when dealing with critical operations like file I/O, network communication, or database transactions. Handling exceptions correctly makes it possible to roll back transactions or perform other necessary cleanup tasks to maintain data integrity.
* Modularity: Exception handling allows for modular design and promotes code reusability. Functions or methods can throw exceptions, and the calling code can catch and handle them accordingly.
# Basic Keywords in Exception Handling: 

Exception Handling in C++ falls around these three keywords: 

1.Throw
2.Catch
3.Try
What is try throw catch in c++?

In C++, try, throw, and catch are keywords used for exception handling. Exception handling allows developers to handle errors or exceptional situations gracefully and provide a structured way to manage unexpected conditions during the execution of a program.

Here's a brief explanation of each keyword:
try: The code that might raise an exception is included within the try block. One or more catch blocks come after it. The program looks for a catch block that matches the try block when an exception is thrown within the try block in order to handle the exception.
throw: To explicitly raise or throw an exception, use the throw keyword. In the try block, it is frequently employed when an exceptional circumstance arises. The control exits the try block when the throw statement is met in order to locate a suitable catch block to handle the exception.
catch: The catch block follows the try block and is used to catch and handle exceptions. It contains code that executes when a specific type of exception is thrown within the associated try block. Multiple catch blocks can be used for different exception types.

try {
    // Code that might throw an exception
    // If an exception is thrown, control jumps to the corresponding catch block
} catch (ExceptionType1 e) {
    // Code to handle ExceptionType1
} catch (ExceptionType2 e) {
    // Code to handle ExceptionType2
} catch (...) {
    // Catch-all block to handle any other unhandled exceptions (optional)
}
How try-catch in c++ works?

In C++, exception handling is done using the try-catch mechanism. It allows you to catch and handle exceptions that occur during the execution of your program. The try block contains the code that might throw an exception, and it handles the exception if it occurs. Here's how it works:

The code that might throw an exception is enclosed within a try block. If an exception occurs within this block, the execution of the code within the try block is immediately stopped, and the program looks for a matching catch block to handle the exception.
After an exception is thrown, the program searches for a matching catch block. A matching catch block is one that can handle the specific type of exception that was thrown. If a matching catch block is found, the code within that block is executed.
If no matching catch block is found within the current scope, the program moves up the call stack, searching for an appropriate catch block in the calling functions. This process continues until a matching catch block is found or until the program reaches the top level of the program (i.e., main() function).
Once a matching catch block is found, the code within that block is executed, and the program continues executing from the point immediately after the try-catch block.
Here's an example to illustrate the usage of try-catch:

#include <iostream>

int main() {
    try {
        // Code that might throw an exception
        int num1, num2;
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        if (num2 == 0) {
            throw std::runtime_error("Divide by zero exception");
        }

        int result = num1 / num2;
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::exception& e) {
        // Exception handling code
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
Example1: Multiple Code Block

#include <iostream>

int main() {
    try {
        // Code that may throw an exception
        int numerator = 10;
        int denominator = 0;
        int result = numerator / denominator;

        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cout << "Runtime error occurred: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }

    return 0;
}
Here, we have added an additional catch block to handle a specific type of exception, std::runtime_error, before catching the more general std::exception. The specific exception types should be caught before the more general ones.

Example2: Throwing a Custom Exception

#include <iostream>
#include <stdexcept>

void checkAge(int age) {
    if (age < 0) {
        throw std::invalid_argument("Age cannot be negative.");
    }
    else if (age < 18) {
        throw std::out_of_range("You must be at least 18 years old.");
    }
    else {
        std::cout << "Access granted." << std::endl;
    }
}

int main() {
    try {
        int userAge = 15;
        checkAge(userAge);
    }
    catch (const std::exception& e) {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }

    return 0;
}
In this example, the checkAge the function throws custom exceptions, std::invalid_argument and std::out_of_range, based on the age value provided. The try block calls the checkAge function, and if an exception is thrown, it is caught and handled in the catch block.

How to use try-catch in c++?

Try-catch is an important keyword while performing exceptional conditions.
In the Try block, the "throw" keyword throws an exception when the code detects a problem, which lets us create a custom error.
Now "catch" keyword comes into a picture i.e. "catch" keyword allows you to define a block of code to be executed if an error occurs in the try block.

How do you catch exceptions in C++?

To catch exceptions, a part of the code is kept under inspection. This is done by closing that part of the code in a try-block. When an exceptional circumstance arises within that block, an exception is thrown and an exception handler takes control over the program.

How to throw an exception in c++?

In C++, you can throw an exception using the throw keyword. Exceptions are a way to handle error conditions or exceptional situations in your code that may disrupt the normal flow of execution. When an exception is thrown, the program will stop executing the current block of code and start searching for an appropriate exception handler (catch block) to handle the exception.

To throw an exception in C++, you typically follow these steps:

Define a custom exception class (optional):
You can create your own custom exception class by inheriting from the standard std::exception class or any of its derived classes. This step is optional, as you can also use the standard exception classes provided by the C++ Standard Library.

Throw the exception:
Use the throw keyword followed by the exception object you want to throw. If you have created a custom exception class, you can instantiate an object of that class and pass it to the throw statement.

Catch the exception (optional):
To handle the thrown exception, you need to enclose the code that may throw an exception within a try-catch block. The catch block will catch the thrown exception and allow you to handle it gracefully.

Here's an example of how to throw and catch an exception in C++:

#include <iostream>

// Custom exception class (optional)
class MyException : public std::exception {
public:
    virtual const char* what() const noexcept override {
        return "My custom exception occurred!";
    }
};

int main() {
    try {
        int age;
        std::cout << "Enter your age: ";
        std::cin >> age;

        if (age < 0) {
            // Throw a custom exception
            throw MyException();
        }

        // Other code that may throw exceptions
        // ...

    } catch (const MyException& ex) {
        std::cout << "Caught custom exception: " << ex.what() << std::endl;
    } catch (const std::exception& ex) {
        // Catch other exceptions derived from std::exception
        std::cout << "Caught standard exception: " << ex.what() << std::endl;
    } catch (...) {
        // Catch any other unhandled exceptions (not recommended, but can be useful for debugging)
        std::cout << "Caught unknown exception." << std::endl;
    }

    return 0;
}

In this example, if the user enters a negative age, the MyException object will be thrown, and it will be caught by the corresponding catch block.

C++ Standard Exceptions

In C++, you can create your own user-defined exceptions to handle specific error conditions in your code. User-defined exceptions allow you to define custom exception types that inherit from the standard C++ std::exception class or any of its derived classes. This enables you to throw and catch specific exception types that represent different error situations.

Here's a step-by-step guide on how to define and use user-defined exceptions in C++:

Step 1: Define your custom exception class

#include <exception>
#include <string>
 
class MyException : public std::exception {
public:
    MyException(const std::string& message) : message_(message) {}
 
    // Override the what() method to provide error description
    const char* what() const noexcept override {
        return message_.c_str();
    }
 
private:
    std::string message_;
};
Step 2: Throw the user-defined exception
You can throw the custom exception in your code when a specific error condition is encountered. For example:

#include <iostream>
 
double divideNumbers(double numerator, double denominator) {
    if (denominator == 0) {
        throw MyException("Division by zero is not allowed.");
    }
    return numerator / denominator;
}
 
int main() {
    try {
        double result = divideNumbers(10.0, 0.0);
        std::cout << "Result: " << result << std::endl;
    } catch (const MyException& ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }
 
    return 0;
}
In this example, we defined a custom MyException class and used it to throw an exception when dividing by zero in the divideNumbers function. In the main function, we catch the exception and handle it by printing the error message.

Step 3: Handle the user-defined exception
When an exception is thrown, you can catch it using a try block and handle it with a corresponding catch block. In this example, we catch MyException and print its error message using the what() method.

User-defined exceptions are helpful for providing meaningful error messages and handling specific error scenarios in your code. You can create multiple custom exception classes to represent different types of errors, which allows for better organization and readability in your exception handling.

What is C++ Standard Exceptions?

C++ standard exceptions provide a list of standard exceptions defined in <exception> which we can use in our programs.
These exceptions are arranged in a parent-child class hierarchy:

User-Defined Exceptions 

In C++, you can create your own user-defined exceptions to handle specific error conditions in your code. User-defined exceptions allow you to define custom exception types that inherit from the standard C++ std::exception class or any of its derived classes. This enables you to throw and catch specific exception types that represent different error situations.

Here's a step-by-step guide on how to define and use user-defined exceptions in C++:

Step 1: Define your custom exception class

#include <exception>
#include <string>
 
class MyException : public std::exception {
public:
    MyException(const std::string&amp; message) : message_(message) {}
 
    // Override the what() method to provide error description
    const char* what() const noexcept override {
        return message_.c_str();
    }
 
private:
    std::string message_;
};
Step 2: Throw the user-defined exception
You can throw the custom exception in your code when encountering a specific error condition. For example:

#include <iostream>
 
double divideNumbers(double numerator, double denominator) {
    if (denominator == 0) {
        throw MyException("Division by zero is not allowed.");
    }
    return numerator / denominator;
}
 
int main() {
    try {
        double result = divideNumbers(10.0, 0.0);
        std::cout << "Result: " << result << std::endl;
    } catch (const MyException& ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }
 
    return 0;
}
In this example, we defined a custom MyException class and used it to throw an exception when dividing by zero in the divideNumbers function. In the main function, we catch the exception and handle it by printing the error message.

Step 3: Handle the user-defined exception
When an exception is thrown, you can catch it using a try block and handle it with a corresponding catch block. In this example, we catch MyException and print its error message using the what() method.

User-defined exceptions are helpful for providing meaningful error messages and handling specific error scenarios in your code. You can create multiple custom exception classes to represent different types of errors, which allows for better organization and readability in your exception handling.
