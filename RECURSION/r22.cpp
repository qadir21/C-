#include <iostream>
using namespace std;
void printArray(int*, int);
void inputArray(int*, int);
int findMin(int*, int);
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
    cout << "The minimum element is: " << findMin(arr, size) << endl;
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
int findMin(int *arr, int s) 
{
    if (s == 1) return arr[0]; 
    int minOfRest = findMin(arr, s - 1); 
    if (arr[s - 1] < minOfRest) 
        return arr[s - 1]; 
        return minOfRest;
}