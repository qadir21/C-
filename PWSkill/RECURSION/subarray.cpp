#include<iostream>
using namespace std;
void print(int *, int);
void input(int *, int);
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];
    cout << "Enter element of array................." << endl;
    input(arr, size - 1);
    cout << "The enterd element is.................." << endl;
    print(arr, size - 1);
    cout << "The Sequence is........................" << endl;
    for(int i = 0; i < size; i++)
    {
        for(int k = i; k < size; k++)
        {
            for(int j = i; j <= k; j++)
            {
                cout << arr[j] << " ";
            } 
            cout << endl;
        }
    }
    return 0;
}
void input(int * a, int i)
{
    if(i < 0) return;
    input(a, i - 1);
    cout << "Enter element " << i + 1 << " : ";
    cin >> a[i];
}
void print(int * ar, int j)
{
    if(j < 0) return;
    print(ar, j - 1);
    cout << "Element " << j + 1 << " : " << ar[j] << endl;
}