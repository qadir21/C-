#include<iostream>
using namespace std;
int main()
{
    int size, product = 1;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:\n";
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "The Entered elements are: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cout << arr[i] << endl;
    }
    for(int i=0; i<size; i++)
    {
        product *= arr[i];
    }
    cout << "The product of all elements in the array is: " << product << endl;
    return 0;
}