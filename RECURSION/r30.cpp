#include<iostream>
using namespace std;
void input(int*, int);
void output(int*, int);
int binary_search(int*, int, int, int);
int main()
{
    int size, item;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the element in ascending or descending order......." << endl;
    input(arr, size - 1);
    cout << "The enterd element are......." << endl;
    output(arr, size - 1);
    cout << "Enter the item you want to search: ";
    cin >> item;
    int a = binary_search(arr, 0, size - 1, item);
    if(a == -1)
    {
        cout << "The element is not found..." << endl;
    }
    else
    {
        cout << "The element " << item  <<  " is found at index: " << a << endl;
    }
    return 0;
}
void input(int* a, int i)
{
    int n;
    if(i < 0) return;
    input(a, i - 1);
    cout << "Enter element " << i + 1 << " : ";
    cin >> n;
    a[i] = n;
}
void output(int * ar, int j)
{
    if(j < 0) return;
    output(ar, j -1);
    cout << "Element " << j + 1 << " : " << ar[j] << endl;
}
int binary_search(int *a, int i, int l,int X)
{
    if(i > l) return -1;
    int mid = (i + l)/2;
    if(a[mid] == X) return mid;
    else if(a[mid] < X)
    {
        return binary_search(a, i + 1, l, X);
    }
    return binary_search(a, i, l - 1,X);
}