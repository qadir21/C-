#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if (n > 99 && n < 1000)
    {
        cout <<"Enterd Number " << n << " is " <<" 3 Digit Number" << endl;
    }
    else
    {
        cout << "Entered Number " << n << " is not a " << "3 Digit Number" << endl;
    }
    return 0;
}