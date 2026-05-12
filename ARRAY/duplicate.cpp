#include<iostream>
using namespace std;
int main()
{
    int size;
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
    for (int i=0; i<size - 1; i++)
    {
        for (int j=1; j<size; j++)
        {
            if( arr[i] == arr[j ])
            {
                cout << "Duplicate element found: " << arr[i] << " at index : " << j << endl;
                return 0;  // Exit the program as soon as a duplicate is found
            }
            else if(arr[i] > arr[j])
            {
            }
        }
    }
    return 0;
}