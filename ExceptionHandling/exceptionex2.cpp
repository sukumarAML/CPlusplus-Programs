#include <iostream>
#include <stdexcept>

int main() {
    try {
        int a = 5, b = 0;
        if (b == 0) {
            throw std::runtime_error("Division by zero");
        }
        int c = a / b;
        std::cout << "Result: " << c << "\n";
    } catch (const std::runtime_error& e) {
        std::cout << "Runtime error: " << e.what() << "\n";
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << "\n";
    } catch (...) {
        std::cout << "Unknown exception\n";
    }
    return 0;
}