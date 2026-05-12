#include<iostream>
using namespace std;
int gcd(int, int);
int main()
{
    int n1, n2;
    cout << "Enter First number: ";
    cin >> n1;
    cout << "Enter Second number: ";
    cin >> n2;
    cout << "The GCD of " << n1 <<  " and " << n2 << " is: " << gcd(n1, n2) << endl;
    return 0;
}
int gcd(int x, int y)
{
    if(x == 0) return y;
    else return gcd(y % x, x); 
}