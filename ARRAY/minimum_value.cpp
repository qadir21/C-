#include<iostream>
using namespace std;
int main()
{
    int size, min;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:\n";
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "The entered elements are: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cout << arr[i] << endl;
    }
    min = arr[0];
    for(int i=1; i<size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The minimum element in the array is: " << min << endl;
    return 0;
}