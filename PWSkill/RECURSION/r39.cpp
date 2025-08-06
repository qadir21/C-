#include <iostream>
#include <vector>
using namespace std;
void calculateSubsetSums(vector<int>& arr, int index, int currentSum, vector<int>& result) 
{
    if (index == arr.size()) 
    {
        result.push_back(currentSum);
        return;
    }
    calculateSubsetSums(arr, index + 1, currentSum + arr[index], result);
    calculateSubsetSums(arr, index + 1, currentSum, result);
}
void printSubsetSums(const vector<int>& result, int i = 0) 
{
    if (i == result.size()) return;
    cout << result[i];
    if (i < result.size() - 1) cout << ", ";
    printSubsetSums(result, i + 1);
}
int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    vector<int> subsetSums;
    calculateSubsetSums(arr, 0, 0, subsetSums);
    cout << "Subset sums: ";
    printSubsetSums(subsetSums);
    cout << endl;
    return 0;
}