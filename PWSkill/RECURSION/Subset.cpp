#include<iostream>
#include<vector>
using namespace std;
void generateSubsets(vector<int> &nums, vector<int> &subset, int index) {
    if(index == nums.size()) {
        cout << "{ ";
        for(int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
        return;
    }
    // Include current element
    subset.push_back(nums[index]);
    generateSubsets(nums, subset, index + 1);
    // Exclude current element
    subset.pop_back();
    generateSubsets(nums, subset, index + 1);
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> arr(size);
    
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    vector<int> subset;
    generateSubsets(arr, subset, 0);
    
    return 0;
}