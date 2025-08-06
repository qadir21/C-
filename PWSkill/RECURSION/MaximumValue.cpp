#include<iostream>
#include<vector>
using namespace std;
void input(int *a, int i)
{
    if(i < 0) return;
    input(a, i - 1);
    cout << "Enter element " << i + 1 << " : ";
    cin >> a[i];
}
void output(int *ar, int j)
{
    if(j < 0) return;
    output(ar, j - 1);
    cout << "Element " << j + 1 << " : " << ar[j] << endl;
}
vector<int> maximum(int *a, int i)
{
    if (i == 0)
    {
        return {0, a[0]}; // index, value
    }
    vector<int> temp = maximum(a, i - 1);
    if (a[i] > temp[1])
    {
        temp[0] = i;
        temp[1] = a[i];
    }
    return temp;
}
int main()
{
    int size;
    cout <<"Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array...................." << endl;
    input(arr, size - 1);
    cout << "The elements of array....................." << endl;
    output(arr, size - 1);
    vector<int> ans = maximum(arr, size - 1); 
    cout << "The maximum element of array is " << ans[1] << " and index is " << ans[0] << endl;
    return 0;
}