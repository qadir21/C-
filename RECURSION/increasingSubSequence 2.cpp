#include<iostream>
using namespace std;
void printSubSet(int *, int, int, vector<int>);
void input
int main()
{
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter size of array: 
    input(arr, size - 1);
    output(arr, size - 1);
    return 0;
}
void printSubSet(int * a, int n, int i, vector<int> ans)
{
    if(i == n)
    {
        for(int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    printSubSet(a, n , i + 1, ans);
    ans.push_back(a[i]);
    printSubSet(a, n , i + 1, ans);
}