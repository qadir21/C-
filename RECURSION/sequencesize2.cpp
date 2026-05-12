#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printSubset(int *, int, int, vector<int>, int);
int main() 
{
    int n, k;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter size of sequence: ";
    cin >> k;
    int arr[n];
    for(int i = 0; i < n; i++) 
    {
        arr[i] = i + 1;
    }
    vector<int> v;
    printSubset(arr, n, 0, v, k);
    return 0;
}
void printSubset(int *a, int num, int idx, vector<int> ans, int k) 
{
    if(idx == num) 
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
    if(ans.size() + (num - idx) < k) return;
    // Not include current element
    printSubset(a, num, idx + 1, ans, k);
    // Include current element
    ans.push_back(a[idx]);
    printSubset(a, num, idx + 1, ans, k);
}