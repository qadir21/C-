#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "The sum of " << n << " natural number is: " << sum(n) << endl;
    return 0;
}
int sum(int a)
{
    if(a == 1) return 1;
    return a + sum(a - 1);
}