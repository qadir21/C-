#include<iostream>
using namespace std;
int Power(int p, int b)
{
    if(p == 0) return 1;
    return b * Power(p - 1, b);
}
int main()
{
    int power, base;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter Power: ";
    cin >> power;
    cout << Power(power, base) << endl;
    return 0;
}