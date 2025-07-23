#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    /* if (n%2 == 0)
    {
        cout<<n<<" is an Even Number.";
    }
    if (n%2 != 0) // --> using double if
    {
        cout<<n<<" is an Odd Number.";
    } */
    //(n%2 == 0)? cout<<n<<" is an Even Number."<< endl : cout<<n<<" is an Odd Number." << endl; // C++ Ternary Operator
    if (n%2 == 0)
    {
        cout<<n<<" is an Even Number." << endl;
    }
    else    // Using if else
    {
        cout<<n<<" is an Odd Number." << endl;
    }
    return 0;
}