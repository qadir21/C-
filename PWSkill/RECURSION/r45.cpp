#include<iostream>
using namespace std;
void input(int*, int);
void output(int*,int);
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter element of array............................" << endl;
    input(arr, size - 1);
    cout << "--------------------------------------------------" << endl;
    cout << "The enterd element are............................" << endl;
    output(arr, size - 1);
    return 0;
}
void input(int * a, int i)
{
    if(i < 0) return;
    input(a, i - 1);
    cout << "Enter element " << i + 1 << " : ";
    cin >> a[i];
}
void output(int *b, int j)
{
    if(j < 0) return;
    output(b, j - 1);
    cout << "Element " << j + 1 << " : " << b[j] << endl;
}