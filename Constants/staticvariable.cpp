#include<iostream>
using namespace std;
void countCalls() {
    static int count = 0; // Static variable to keep track of the number of calls
    count++;
    cout << "Function called static variable " << count << " times." << endl;
}
void countCalls1() {
    int count = 0; // Static variable to keep track of the number of calls
    count++;
    cout << "Function called Non static " << count << " times." << endl;
}
int main() {
    countCalls(); // First call
    countCalls(); // Second call
    countCalls(); // Third call
    countCalls1(); // First call
    countCalls1(); // Second call
    countCalls1(); // Third call
    return 0;
}