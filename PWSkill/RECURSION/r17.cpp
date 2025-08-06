#include<iostream>
using namespace std;
int main()
{
    int a, b, gcd = 1, mini;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    if(a > b) mini = b;
    else mini = a;
    for(int i = 2; i <= mini; i++)
    {
        if(a % i == 0 &&  b % i == 0)
        {
            gcd = i;
        }
    }
    cout << "GCD of " << a << " , " << b << " is: " << gcd << endl;
    return 0;
}