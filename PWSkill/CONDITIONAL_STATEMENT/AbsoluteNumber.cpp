#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n < 0)
    {
        cout<<"The Absolute value of " << n << " is " << n * (-1) << endl;
    }
    else 
    {
        cout<<"The Absolute value of " << n << " is " << n << endl;
    }
    return 0;
}