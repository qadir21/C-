#include<iostream>
using namespace std;
void input(int *, int);
void output(int *, int);
bool binarySearch(int *, int, int, int);
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array..." << endl;
    input(arr, size - 1);
    cout << "The entered elements are..." << endl;
    output(arr, size - 1);
    int key;
    cout << "\nEnter element to search: ";
    cin >> key;
    if(binarySearch(arr, 0, size - 1, key))
        cout << "Element found!" << endl;
    else
        cout << "Element not found!" << endl;
    return 0;
}

// Recursively input elem
void input(int *a, int i)
{
    if(i < 0) return;
    input(a, i - 1); 
    cout << "Enter Element " << i + 1 << " : ";
    cin >> a[i];
}
void output(int *a, int i)
{
    if(i < 0) return;
    output(a, i - 1); 
    cout << "Element " << i + 1 << " : " << a[i] << endl;
}
bool binarySearch(int *a, int low, int high, int key)
{
    if(low > high) return false;
    int mid = (low + high) / 2;
    if(a[mid] == key) 
    {
        cout << "Index " << mid  << " ";
        return true;
    }
    else if(key < a[mid])
        return binarySearch(a, low, mid - 1, key);
    else
        return binarySearch(a, mid + 1, high, key);
}