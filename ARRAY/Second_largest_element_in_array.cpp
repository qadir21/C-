#include<iostream>
#include<climits> // for compatibility with existing implementation of climits  library functions
using namespace std;
int main()
{
    int size, index1, index2, smax, max;
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
    max = INT_MIN;
    smax = INT_MIN;
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cout << arr[i] << endl;
    }
    for(int i=0; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            index1 = i;
        }
    }
    for(int i=0; i<size; i++)
    {
        if(arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
            index2 = i;
        }
    }
    cout << "The maximum element in the array is: " << max << endl;
    cout << "The index of the maximum element is: " << index1 << endl;
    cout << "The second Largest element in the array is: " << smax << endl;
    cout << "The index of the second maximum element is: " << index2 << endl;
    return 0;
}
