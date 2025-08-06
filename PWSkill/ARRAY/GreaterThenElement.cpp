#include<iostream>
using namespace std;
int main()
{
    int size,count = 0, element;
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
    cout << "Enter the element: ";
    cin >> element;
    for(int i=0; i<size; i++)
    {
        if (element < arr[i])
        {
            count++;
        }
    }
    cout << "The number of elements greater than " << element << " is: " << count << endl;
    return 0;
}