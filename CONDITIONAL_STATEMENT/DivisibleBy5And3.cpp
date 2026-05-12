#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    /* if ((n % 3 == 0) && (n % 5 == 0))
    {
        cout << "The number " << n << "is divisible by both 3 and 5." << endl;
    }
    else
    {
        cout << "The number " << n << " is not divisible by both 3 and 5." << endl;
    }*/
    /* ((n % 3) == 0 && (n % 5 == 0)) ? cout << "The number " << n << " is divisible by " << 5 << " and " << 3 << endl : cout << "The number " << n << " is not divisible by " << 5 << " and " << 3 << endl; */
    if (n % 15 == 0)
    {
        cout << "The number " << n << " is divisible by both 3 and 5." << endl;
    }
    else
    {
        cout << "The number " << n << " is not divisible by both 3 and 5." << endl;
    }
    return 0;
}