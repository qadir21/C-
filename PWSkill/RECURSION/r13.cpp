#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int term;
    cout << "Enter term of fibonacci series: ";
    cin >> term;
    cout << "The " << term << " term of fibonacci " << " : " << fib(term) << endl;
    return 0;
}
int fib(int a)
{
    if(a == 1) return 0;
    else if(a == 2) return 1;
    return fib(a - 1) + fib(a - 2);
}