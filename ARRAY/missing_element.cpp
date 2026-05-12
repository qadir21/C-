#include <iostream>
using namespace std;
int main()
{
    cout << "Enter 5 elements of the array : ";
    // Creating an array of size 5 and taking input from the user.
    // The array is initialized with zeros, so the first element will be the smallest number in the array.
    // Then we iterate through the array and print out the first non-zero element found.
    // If no non-zero element is found, we print the next smallest number in the array.
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int x = 0;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] != x)
        {
            cout << x << endl;
            flag = true;
            break;
        }
        else
            x++;
    }
    if (flag == false)
        cout << x << endl;
    return 0;
}