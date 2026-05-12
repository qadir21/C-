#include<iostream>
using namespace std;
int main()
{
    int dividend, divisor, remainder,quotient;
    cout << "Enter the divident: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    /*quotient = dividend / divisor;
    remainder = dividend - divisor * quotient; // dividend = divisor * quotient + remainder
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;*/ // if divedend is greaterter than dividend then remainder is dividend.
    remainder = dividend % divisor;
    cout << "Remainder: " << remainder << endl;
    return 0;
}