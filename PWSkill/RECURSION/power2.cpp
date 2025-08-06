#include<iostream>
using namespace std;
int Power(int b, int p)
{
    if(p == 0) return 1;
    int half = Power(b, p / 2);
    if(p % 2 == 0) return half * half;
    else return half * half * b;
}
int main()
{
    int base, power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power ";
    cin >> power;
    cout << Power(base, power) << endl;
    return 0;
}