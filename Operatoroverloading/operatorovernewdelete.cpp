#include <iostream>
#include <cstdlib>   // for malloc and free
using namespace std;

class Sample {
    int x;

public:
    // Constructor
    Sample(int a = 0) {
        x = a;
        cout << "Constructor called. Value = " << x << endl;
    }

    // Overloading new operator
    void* operator new(size_t size) {
        cout << "Overloaded new operator called" << endl;
        void* p = malloc(size);
        return p;
    }

    // Overloading delete operator
    void operator delete(void* p) {
        cout << "Overloaded delete operator called" << endl;
        free(p);
    }
};

int main() {
    // Creating object using new
    Sample* obj = new Sample(10);

    // Deleting object using delete
    delete obj;

    return 0;
}
