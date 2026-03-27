#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(0);	
    vec.push_back(1);	

    try
    {
        vec.at(2);   // throws out_of_range
    }
    catch (out_of_range& e)
    {
        cout << "Out of range exception caught!" << endl;
    }
    catch (exception& ex)
    {
        cout << "General exception occurred!" << endl;
    }

    return 0;
}