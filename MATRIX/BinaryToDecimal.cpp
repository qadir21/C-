#include<iostream>
using namespace std;
int main()
{
    int size, sum = 0, x = 1;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the element of array................." << endl;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "Enterd Element are........................." << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << " : " << arr[i] << endl;
    }
    for(int i = size - 1; i >= 0; i--, x *= 2)
    {
        sum += arr[i] * x;
    }
    cout << "The decimal conversion of binary is: " << sum << endl;
    return 0;
}