#include<iostream>
using namespace std;
int Power(int b, int p)
{
    if(p == 0) return 1;
    return b * Power(b, p - 1);
}
int main()
{
    int base, power;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;
    cout << Power(base, power) << endl;
    return 0;
}