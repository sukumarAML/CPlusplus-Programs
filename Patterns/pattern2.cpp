#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i<=n; i++)
     {
        for(int k = n-i; k>0; k--) 
            cout << " ";
        for(int j = 1; j <= i; j++) //change i to n you get the pattern 
            {
                cout<<"*";
            }
        cout << endl;
        }
    return 0;
}

// Enter the number of rows: 5
//     *****
//    *****
//   *****
//  *****
// *****