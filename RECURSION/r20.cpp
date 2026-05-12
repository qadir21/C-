#include<iostream>
using namespace std;
void printArray(int*, int);
void inputArray(int*, int);
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter element of array..." << endl;
    inputArray(arr, size);
    cout << "Enterd elemnt are....." << endl;
    printArray(arr, size);
    return 0;
}
void inputArray(int *A, int s)
{
    if(s == - 1) return;
    int item;
    inputArray(A, s - 1);
    cout << "Enter Element " << s + 1 << " : ";
    cin >> item;
    A[s - 1] = item;
}
void printArray(int *Ar, int n)
{
    if(n == -1) return;
    printArray(Ar, n - 1);
    cout << "Element " << n + 1<< " : " << Ar[n - 1] << endl;
}
