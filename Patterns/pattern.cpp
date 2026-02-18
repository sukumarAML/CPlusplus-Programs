#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    

    for(int k=5; k>=1; k--)
    {
        for(int l=k; l>0; l--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}