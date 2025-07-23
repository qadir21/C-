#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n % 5 == 0)
    {
        cout<<"The number " << n <<  " is divisible by 5."<<endl;
    }
    else 
    {
        cout<<"The number " << n << " is not divisible by 5."<<endl;
    }
    return 0;
}