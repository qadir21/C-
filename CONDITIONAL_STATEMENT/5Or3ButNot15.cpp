#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if ((n % 5 == 0 || n % 3 == 0))
    {
        if (n % 15 != 0)
        {
            cout << "The number is divisible by 5 or 3 but not by both." << endl;
        }
        else
        {
            cout << "Condition is not not matching" << endl;
        }
    }
    else
    {
        cout << "Condition is not matching" << endl;
    }
    return 0;
}