#include <iostream>
#include <stdexcept>

int main() {
    try {
        try {
            throw std::runtime_error("inner error");
        } catch (const std::runtime_error &e) {
            std::cerr << "Caught inner exception: " << e.what() << '\n';
            throw std::logic_error("rethrow as outer error");
        }
    } catch (const std::logic_error &e) {
        std::cerr << "Caught outer exception: " << e.what() << '\n';
        if (e.what()) {
            std::cerr << "Nested handling done\n";
        }
    } catch (...) {
        std::cerr << "Caught unknown exception\n";
    }

    return 0;
}