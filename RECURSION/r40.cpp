#include<iostream>
#include<vector>
using namespace std;
bool targetSumSubset(vector<int>& nums, int target, int index) 
{
    if (target == 0) return true;
    if (index == nums.size()) return false;
    if (targetSumSubset(nums, target - nums[index], index + 1)) 
    {
        return true;
    }
    return targetSumSubset(nums, target, index + 1);
}
int main() 
{
    int size, target;
    cout << "Enter size of the array: ";
    cin >> size;
    vector<int> nums(size);
    
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> nums[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;
    if (targetSumSubset(nums, target, 0)) 
    {
        cout << "Subset with the target sum exists!" << endl;
    } else 
    {
        cout << "No subset with the target sum exists." << endl;
    }
    return 0;
}