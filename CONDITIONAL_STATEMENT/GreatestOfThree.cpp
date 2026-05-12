#include<iostream>
using namespace std;
int main()
{
    int num_1, num_2, num_3;
    cout << "Enter first number: ";
    cin >> num_1;
    cout << "Enter second number: ";
    cin >> num_2;
    cout << "Enter third number: ";
    cin >> num_3;
    if (num_1 > num_2 && num_1 > num_3)
    {
        cout << "The largest number is: " << num_1 << endl;
    }
    else if (num_2 > num_3)
    {
        cout << "The largest number is: " << num_2 << endl;
    }
    else
    {
        cout << "The largest number is: " << num_3 << endl;
    }
    return 0;
}