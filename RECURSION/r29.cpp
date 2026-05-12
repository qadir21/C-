#include<iostream>
using namespace std;
int linear_search(int*, int, int, int);
void input(int*, int);
void output(int*, int);
int main()
{
    int size, item;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the element of array......." << endl;
    input(arr, size - 1);
    cout << "The enterd element are......." << endl;
    output(arr, size - 1);
    cout << "Enter the item you want to search: ";
    cin >> item;
    int a = linear_search(arr, size - 1, 0, item);
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
int linear_search(int *a,int l, int i, int X)
{
    if(i == l) return -1;
    if(a[i] == X) return i;
    return linear_search(a, l, i + 1, X);
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