#include <iostream>
#include <stdexcept>

int main() {
    try {
        int x = 0;
        int y = 10;
        if (x == 0) {
            throw std::runtime_error("Divide by zero attempt");
        }
        int z = y / x;
        std::cout << "Result: " << z << "\n";
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Invalid argument: " << e.what() << "\n";
    }
    catch (const std::out_of_range& e) {
        std::cout << "Out of range: " << e.what() << "\n";
    }
    catch (const std::runtime_error& e) {
        std::cout << "Runtime error: " << e.what() << "\n";
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << "\n";
    }
    catch (...) {
        std::cout << "Unknown exception\n";
    }
    return 0;
}