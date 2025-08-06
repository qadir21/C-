#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr1[m], arr2[n];
    for(int i = 0; i < m; i++) cin >> arr1[i];
    for(int i = 0; i < n; i++) cin >> arr2[i];
    int res[m + n];
    int i = 0, j = 0, k = 0;
    while(i < m && j < n)
    {
        if(arr1[i] < arr2[j]) res[k++] = arr1[i++];
        else res[k++] = arr2[j++];
    }
    while(i < m) res[k++] = arr1[i++];
    while(j < n) res[k++] = arr2[j++];
    for(int x : res) cout << x << " ";
    return 0;
}