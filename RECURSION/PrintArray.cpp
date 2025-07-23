#include<iostream>
using namespace std;
void input(int *, int);
void output(int *, int);
int main()
{
    int size;
    cout <<"Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elemnt of array...................." << endl;
    input(arr, size - 1);
    cout << "The element of array....................." << endl;
    output(arr, size - 1);
    return 0;
}
void input(int *a, int i)
{
    if(i < 0) return;
    input(a, i - 1);
    cout << "Enter element " << i + 1 << " : ";
    cin >> a[i];
}
void output(int *ar, int j)
{
    if(j < 0) return;
    output(ar, j - 1);
    cout << "Element " << j + 1 << " : " << ar[j] << endl;
}