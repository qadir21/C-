#include<iostream>
#include<climits>
using namespace std;
int maxIntArr(int *, int);
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array: " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1  << " : ";
        cin >> arr[i];
    }
    cout << "The entered elements are: " << endl;
    for(int j = 0; j < size; j++)
    {
        cout << "Element " << j + 1  << " : " << arr[j] << endl;
    }
    cout << "The maximum element of array is " << maxIntArr(arr, size - 1) << endl; 
    return 0;
}
int maxIntArr(int *a, int idx)
{
    if(idx == 0) return a[0];  // base case: only one element left
    return max(a[idx], maxIntArr(a, idx - 1)); // compare current element with maximum of rest
}