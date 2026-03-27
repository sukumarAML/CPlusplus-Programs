#include <iostream>
#include <stdexcept>

void inner()
{
    try
    {
        throw std::runtime_error("inner error");
    }
    catch (...)
    {
        std::cout << "inner caught, rethrowing\n";
        throw; // rethrow same exception
    }
}

void outer()
{
    try
    {
        inner();
    }
    catch (const std::exception &e)
    {
        std::cout << "outer caught: " << e.what() << "\n";
        throw; // optionally rethrow again
    }
}

int main()
{
    try
    {
        outer();
    }
    catch (const std::exception &e)
    {
        std::cout << "main caught: " << e.what() << "\n";
    }
    return 0;
}