#include <iostream>
using namespace std;
int main()
{
double x = 12.0;
cout.precision(2); // Precision 2
cout << " By default: " << x << endl;
cout << " showpoint: " << showpoint << x << endl;
cout << " fixed: " << fixed << x << endl;
cout << " scientific: " << scientific << x << endl;

int y;
char a;
float b;
cout<<"double:"<<sizeof(x)<<endl;
cout<<"char:"<<sizeof(a)<<endl;
cout<<"float:"<<sizeof(b)<<endl;
cout<<"int:"<<sizeof(y)<<endl;
return 0;
}