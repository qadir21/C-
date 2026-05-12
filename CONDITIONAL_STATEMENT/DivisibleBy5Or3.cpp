#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if( ((n %3 == 0) || (n% 5 == 0)) && (n % 15 != 0))
    {
        cout << "The number is divisible by 3 or 5 but not 15." << endl;
    }
    else if ((n % 5 == 0) || (n % 5 == 0))
    {
        cout << "The number is divisible by 3 or 5." << endl;
    }
    else 
    {
        cout << "The number is not divisible by 3 or 5." << endl;
    }
    return 0;
}
