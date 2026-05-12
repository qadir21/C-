#include<iostream>
#include<vector>
using namespace std;
void PrintSubSet(int *a, int n, int i, vector<int> ans) 
{
    if (i > n) 
    {
        cout << "{";
        for (int j = 0; j < ans.size(); j++) 
        {
            cout << ans[j];
            if (j != ans.size() - 1) cout << ",";
        }
        cout << "}" << endl;
        return;
    }
    // Exclude current elementn
    PrintSubSet(a, n, i + 1, ans);
    // Include current element
    ans.push_back(a[i]);
    PrintSubSet(a, n, i + 1, ans);
}
int main() 
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array.................." << endl;
    for(int i = 0; i < size; i++) 
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "The entered elements are................." << endl;
    for(int j = 0; j < size; j++) 
    {
        cout << "Element " << j + 1 << " : " << arr[j] << endl;
    }
    vector<int> v;
    cout << "\nAll subsets are:\n";
    PrintSubSet(arr, size - 1, 0, v);
    return 0;
}