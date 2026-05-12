#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printSubset(int *, int, int, vector<int>);
int main() 
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
    {
        arr[i] = i + 1;
    }
    vector<int> v;
    printSubset(arr, n, 0, v);
    return 0;
}
void printSubset(int *a, int num, int idx, vector<int> ans) 
{
    if(idx == num) 
    {
        for(int i = 0; i < ans.size(); i++) 
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    // Not include current element
    printSubset(a, num, idx + 1, ans);
    // Include current element
    ans.push_back(a[idx]);
    printSubset(a, num, idx + 1, ans);
}