#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
void input(vector<int>&, int);
void output(const vector<int>&, int);
void permute(vector<int>&, vector<vector<int> >& , int, unordered_set<int>&);
vector<vector<int> > permuteUnique(vector<int>&);
int main() 
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array..." << endl;
    input(arr, 0);
    cout << "---------------------------------" << endl;
    cout << "The entered elements are:" << endl;
    output(arr, size);
    
    vector<vector<int> > result = permuteUnique(arr);
    cout << "Unique permutations are:" << endl;
    for (int i = 0; i < result.size(); i++)  
    {
        for (int j = 0; j < result[i].size(); j++)  
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
void input(vector<int>& a, int i)
{
    if (i >= a.size()) return;
    cout << "Enter element " << i + 1 << " : ";
    cin >> a[i];
    input(a, i + 1);
}
void output(const vector<int>& b, int j) 
{
    if (j == 0) return;
    output(b, j - 1);
    cout << "Element " << j << " : " << b[j - 1] << endl;
}
vector<vector<int> > permuteUnique(vector<int>& nums)
{
    vector<vector<int> > ans;
    sort(nums.begin(), nums.end());  
    unordered_set<int> used;         
    permute(nums, ans, 0, used);
    return ans;
}
void permute(vector<int>& c, vector<vector<int> >& ans, int k, unordered_set<int>& used) 
{
    if (k == c.size()) 
    {
        ans.push_back(c);
        return;
    }
    for (int l = k; l < c.size(); l++) 
    {
        if (l > k && c[l] == c[l - 1]) 
            continue;
        swap(c[k], c[l]);  
        permute(c, ans, k + 1, used);  
        swap(c[k], c[l]);
    }
}