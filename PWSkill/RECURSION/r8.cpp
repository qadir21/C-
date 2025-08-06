#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "The factorial of " << n << " : " << fact(n) << endl;
    return 0;
}
int fact(int a)
{
    if(a == 0 || a == 1 || a == 2) return a;
    return a * fact(a-1);
}