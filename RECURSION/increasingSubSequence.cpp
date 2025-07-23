#include<iostream>
using namespace std;
void printSubSet(int *, int, int, vector<int>, int);
void input(int *, int);
void print(int *, int);
int main()
{
    int size, k;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the element of array.........." << endl;
    input(arr, size - 1);
    cout << "The enterd element of array........." << endl;
    print(arr, size - 1);
    vector<int> v;
    cout << "Enter size of sub sequence: ";
    cin >> k; 
    cout << "The subsequence is.................." << endl;
    printSubSet(arr, size, 0, v, k);
    return 0;
}
void printSubSet(int * a, int n, int i, vector<int> ans, int k)
{
    if(i == n)
    {
        if(ans.size() == k)
        {
            for(int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    if(ans.size() + (n - i) < k) return;
    printSubSet(a, n , i + 1, ans, k);
    ans.push_back(a[i]);
    printSubSet(a, n , i + 1, ans, k);
}
void input(int * ar, int j)
{
    if(j < 0) return;
    input(ar, j - 1);
    cout << "Enter element " << j + 1 << " : ";
    cin >> ar[j];
}
void print(int * array, int k)
{
    if(k < 0) return;
    print(array, k - 1);
    cout << "Element " << k + 1 << " : " << array[k] << endl;
}