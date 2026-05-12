#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << fibo(num) << endl;
    return 0;
}