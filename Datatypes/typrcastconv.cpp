#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    char c = 'A';
    int i = 65;
    double d = 65.0;
    string str = "Hello, World!"; 
    c = i;
    cout << "After assigning int to char: " << c << endl;
    i = static_cast<int>(d);
    cout << "After static_cast double to int: " << i << endl;
    return 0;
}