#include <iostream>
using namespace std;
void input(int *, int);
void output(int *, int);
void Quicksort(int *, int, int);
int partition(int *, int, int);
int main() 
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array............." << endl;
    input(arr, size - 1);
    cout << "---------------------------------------------" << endl;
    cout << "The entered elements are.............." << endl;
    output(arr, size - 1);
    cout << "----------------------------------------------" << endl;
    cout << "After sorting........" << endl;
    Quicksort(arr, 0, size - 1);
    output(arr, size - 1);
    return 0;
}
void input(int *a, int i) 
{
    if (i < 0) return;
    input(a, i - 1);
    cout << "Enter element " << i + 1 << " : ";
    cin >> a[i];
}
void output(int *ar, int j) 
{
    if (j < 0) return;
    output(ar, j - 1);
    cout << "Element " << j + 1 << " : " << ar[j] << endl;
}
void Quicksort(int *array, int start, int end) 
{
    if (start >= end) return;
    int pivot = partition(array, start, end);
    Quicksort(array, start, pivot - 1); 
    Quicksort(array, pivot + 1, end);   
}
int partition(int *b, int s, int e) 
{
    int pivot = b[e]; 
    int i = s - 1;    
    for (int j = s; j < e; j++) 
    { 
        if (b[j] <= pivot) 
        { 
            i++;
            swap(b[i], b[j]);
        }
    }
    swap(b[i + 1], b[e]); 
    return i + 1;         
}