#include<iostream>
using namespace std;
void print(int *, int);
void input(int *, int);
void subArray(vector<int> , int *, int , int);
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
    vector<int> v;
    subArray(v, arr, size, 0);
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
void subArray(vector<int> v, int *a, int n, int i)
{
    if(i == n) 
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    subArray(v, a, n, i + 1);
    if(v.size() == 0 || a[i - 1] == v[v.size() - 1])
    {
        v.push_back(a[i]);
        subArray(v, a, n, i + 1);
    }
}