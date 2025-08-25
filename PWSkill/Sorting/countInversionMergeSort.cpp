#include <iostream>
#include <vector>
using namespace std;

int inversion(vector<int> &, vector<int> &);
void merge(vector<int> &, vector<int> &, vector<int> &);
int mergeSort(vector<int> &);
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int invCount = mergeSort(arr);
    for (int x : arr) cout << x << " ";
    cout << endl;
    cout << invCount;
    return 0;
}

void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while (i < a.size()) res[k++] = a[i++];
    while (j < b.size()) res[k++] = b[j++];
}

int mergeSort(vector<int> &v)
{
    int count = 0;
    int n = v.size();
    if(n <= 1) return 0;
    int n1 = n / 2, n2 = n - n / 2;
    vector<int> a(n1), b(n2);
    for(int i = 0; i < n1; i++) a[i] = v[i];
    for(int i = 0; i < n2; i++) b[i] = v[i + n1];  
    count += mergeSort(a);
    count += mergeSort(b);
    count += inversion(a, b);
    merge(a, b, v);
    return count;
}

int inversion(vector<int> &v1, vector<int> &v2)
{
    int i = 0, j = 0, count = 0; 
    while(i < v1.size() && j < v2.size())
    {
        if(v1[i] > v2[j]) 
        {
            count += (v1.size() - i);
            j++;
        }
        else i++;
    }
    return count;
}