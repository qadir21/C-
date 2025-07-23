#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n % 3 == 0)
    {
        if (n % 5 == 0)
        {
            cout << "Number is divisible by both 3 and 5." << endl;
        }
        else 
        {
            cout << "Number is not divisible by 3 and 5." << endl;
        }
    }
    else
    {
        cout << "Number is not divisible by 3 and  5." << endl;
    }
    return 0;
}