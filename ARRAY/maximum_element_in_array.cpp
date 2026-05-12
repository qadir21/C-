#include<iostream>
using namespace std;
int main()
{
    int size, temp = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:\n";
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "The enterd elements of the array are: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cout << arr[i] << endl;
    }
    int max = arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            temp = i;
        }
    }
    cout << "The maximum element in the array is: " << max << endl;
    cout << "The index of the maximum element is: " << temp << endl;
    return 0;
}