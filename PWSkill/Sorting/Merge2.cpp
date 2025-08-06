#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &, vector<int> &, vector<int> &);
void mergeSort(vector<int> &);
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    mergeSort(arr);
    for(int x : arr) cout << x << " ";
    return 0;
}

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while (i < a.size()) res[k++] = a[i++];
    while (j < b.size()) res[k++] = b[j++];
}

void mergeSort(vector<int> &v)
{
    int n = v.size();
    if(n <= 1) return;
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for(int i = 0; i < n1; i++) a[i] = v[i];
    for(int i = 0; i < n2; i++) b[i] = v[i + n1];  
    
    // Magic aka recursion
    mergeSort(a);
    mergeSort(b);
    //merge
    merge(a, b, v);
}