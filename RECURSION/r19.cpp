#include<iostream>
using namespace std;
void printArray(int,int*,int);
void inputArray(int,int*,int);
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter element of array..." << endl;
    inputArray(0, arr, size);
    cout << "Enterd elemnt are....." << endl;
    printArray(0, arr, size);
    return 0;
}
void inputArray(int i, int *A, int s)
{
    if(i == s) return;
    int item;
    cout << "Enter Element " << i + 1 << " : ";
    cin >> item;
    A[i] = item;
    inputArray(i + 1, A, s);
}
void printArray(int j, int *Ar, int n)
{
    if(j == n) return;
    cout << "Element " << j + 1 << " : " << Ar[j] << endl;
    printArray(j + 1, Ar, n);
}
