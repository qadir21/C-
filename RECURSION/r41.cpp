#include<iostream> 
using namespace std;
void output(int *, int);
void input(int *, int);
bool find(int*, int, int, int);
int main()
{
    int size, target;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elemnt of array................" << endl;
    input(arr,size - 1);
    cout << "-----------------------------------------" << endl;
    cout << "The enterd element are..................." << endl;
    output(arr, size - 1);
    cout << "-----------------------------------------" << endl;
    cout << "Enter target: ";
    cin >> target;
    cout << "-----------------------------------------" << endl;
    if(find(arr,0, size, target))
    {
        cout << "The target is found. " << endl;
    }
    else
    {
        cout << "The target is not found. " << endl;
    }
    return 0;
}
void input(int *a, int i)
{
    if(i < 0) return;
    input(a, i - 1);
    cout << "Enter Element " << i + 1 << " : ";
    cin >> a[i];
}
void output(int * ar, int j) 
{
    if(j < 0) return;
    output(ar, j- 1);
    cout << "Element " << j + 1 << " : " << ar[j] << endl;
}
bool find(int * b, int in, int n, int target)
{
    if(target == 0) return 1;
    if(in == n || target < 0) return 0;
    return find(b,in + 1, n, target) || find(b, in + 1, n, target - b[in]);
}