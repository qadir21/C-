#include <iostream>
#include <vector>
using namespace std;
void input(int* a, int i) 
{
    if (i < 0) return;
    input(a, i - 1);
    cout << "Enter element " << i + 1 << ": ";
    cin >> a[i];
}
void output(int* ar, int j) 
{
    if (j < 0) return;
    output(ar, j - 1);
    cout << "Element " << j + 1 << ": " << ar[j] << endl;
}
void subsequence(int* array, int k, int s, vector<vector<int> >& ans, vector<int> temp) 
{
    if (k == s) 
    {
        ans.push_back(temp);
        return;
    }
    subsequence(array, k + 1, s, ans, temp);
    temp.push_back(array[k]);
    subsequence(array, k + 1, s, ans, temp);
}
void printSubSequence(const vector<vector<int> >& ans, int i = 0) 
{
    if (i == ans.size()) return;
    cout << "{ ";
    for (size_t j = 0; j < ans[i].size(); ++j) 
    {
        cout << ans[i][j];
        if (j < ans[i].size() - 1) {
            cout << ", ";
        }
    }
    cout << " }" << endl;
    printSubSequence(ans, i + 1);
}
int main() {
    int size;
    vector<vector<int> > ans;
    vector<int> temp;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of the array:" << endl;
    input(arr, size - 1);
    cout << "--------------------------------------------" << endl;
    cout << "The entered elements are:" << endl;
    output(arr, size - 1);
    cout << "--------------------------------------------" << endl;
    cout << "The subsequences are:" << endl;
    subsequence(arr, 0, size, ans, temp);
    printSubSequence(ans);
    return 0;
}