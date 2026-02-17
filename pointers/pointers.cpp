#include <iostream>
#include <iomanip> // For setting precision
#include <bitset> // For displaying binary representation

using namespace std;

int main() {
  int num = 10;

  // 1. Declare a pointer
  int *ptr; // Pointer to an integer

  // 2. Assign the address of 'num' to the pointer
  ptr = &num; // & is the address-of operator

  cout << "Value of num: " << num << endl;
  cout << "Address of num: " << &num << endl;
  cout << "Value of ptr: " << ptr << endl; // ptr holds the address of num

  // 3. Dereferencing a pointer
  cout << "\nValue at the address pointed to by ptr: " << *ptr << endl; // * is the dereference operator

  // 4. Modifying the value through the pointer
  *ptr = 20;

  cout << "Value of num after modification through ptr: " << num << endl;
  cout << "Value at the address pointed to by ptr: " << *ptr << endl;

  // 5. Pointer Arithmetic
  int *ptr2 = ptr; // ptr2 now points to the same memory location as ptr

  ptr2++; // Increment ptr2 (moves it to the next integer)
  cout << "\nValue of ptr2 after increment: " << ptr2 << endl; // ptr2 now points to the next integer in memory
  cout << "Value at the address pointed to by ptr2: " << *ptr2 << endl;

  // 6. Null Pointer
  int *nullPtr = nullptr; // Recommended way to represent a null pointer

  if (nullPtr == nullptr) {
    cout << "\nnullPtr is a null pointer." << endl;
  }

  // 7. Pointer to Pointer
  int **ptrToPtr = &ptr;
  cout << "\nAddress of ptr (using ptrToPtr): " << ptrToPtr << endl;
  cout << "Value of ptrToPtr: " << *ptrToPtr << endl;
  cout << "Value pointed to by ptrToPtr: " << **ptrToPtr << endl;


  return 0;
}

