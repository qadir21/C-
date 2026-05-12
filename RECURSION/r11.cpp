#include<iostream>
using namespace std;
int sum_of_natural_number(int);
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "The sum of square of " << n << " natural number: " << sum_of_natural_number(n) << endl;
    return 0;
}
int sum_of_natural_number(int a)
{
    if(a == 1) return a * a;
    return (a * a) + sum_of_natural_number(a - 1);
}