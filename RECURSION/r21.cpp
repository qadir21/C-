#include <iostream>
using namespace std;
void printArray(int*, int);
void inputArray(int*, int);
int sum(int*, int);
int main() 
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of the array..." << endl;
    inputArray(arr, size);
    cout << "Entered elements are....." << endl;
    printArray(arr, size);
    cout << "The sum of the array: " << sum(arr, size) << endl;
    return 0;
}
void inputArray(int *A, int s) 
{
    if (s == 0) return;
    inputArray(A, s - 1);
    cout << "Enter Element " << s << " : ";
    cin >> A[s - 1];
}
void printArray(int *Ar, int n) 
{
    if (n == 0) return;
    printArray(Ar, n - 1);
    cout << "Element " << n << " : " << Ar[n - 1] << endl;
}
int sum(int *a, int s) {
    if (s == 0) return 0;
    return sum(a, s - 1) + a[s - 1];
}