#include <iostream>

int main() {
    try {
        // Simulate an exception being thrown
        throw std::runtime_error("An error occurred");
    } catch (...) {
        // Catch-all handler for any exception
        std::cout << "Caught an exception of unknown type." << std::endl;
    }
    return 0;
}