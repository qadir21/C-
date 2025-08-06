#include<iostream>
using namespace std;
int power(int);
int main()
{
    int p;
    cout << "Enter power: ";
    cin >> p;
    cout << "2 raised to the power " << p << " : " << power(p) << endl;
    return 0;
}
int power(int n)
{
    if(n == 0) return 1;
    return 2 * power(n - 1);
}