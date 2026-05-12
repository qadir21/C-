#include<iostream>
using namespace std;
int factorial(int n)
{
    int prod = 1;
    if (n == 0) return 1;
    for(int i = 1; i <= n; i++)
    {
        prod *= i;
    }
    return prod;
}
int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << factorial(num) << endl;
    return 0;
}