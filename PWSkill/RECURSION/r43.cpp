#include <iostream>
using namespace std;
void inputArray(int* arr, int index, int size) 
{
    if (index >= size) return;
    cout << "Enter element " << index + 1 << ": ";
    cin >> arr[index];
    inputArray(arr, index + 1, size);
}
void printArray(int* arr, int index, int size) 
{
    if (index >= size)
    {
        cout << endl;
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, index + 1, size);
}
void permute(int* arr, int l, int r);
void permuteHelper(int* arr, int l, int r, int i) 
{
    if (i > r) return; 
    swap(arr[l], arr[i]); 
    permute(arr, l + 1, r); 
    swap(arr[l], arr[i]); 
    permuteHelper(arr, l, r, i + 1); 
}
void permute(int* arr, int l, int r)
{
    if (l == r) 
    { 
        printArray(arr, 0, r + 1);
        return;
    }
    permuteHelper(arr, l, r, l); 
}
int main() 
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    if (size <= 0) 
    {
        cout << "Invalid size. Exiting..." << endl;
        return 0;
    }
    int* arr = new int[size];
    cout << "Enter elements of the array..." << endl;
    inputArray(arr, 0, size);
    cout << "Permutations of the array are:" << endl;
    permute(arr, 0, size - 1);
    delete[] arr;
    return 0;
}