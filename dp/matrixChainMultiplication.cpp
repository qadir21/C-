#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> takeInput(){
    vector<int> v;
    int n;
    while(cin >> n){
        v.push_back(n);
    }
    return v;
}

int helper(int i, int j, vector<int>& arr, vector<vector<int>>& dp){
    if(i == j || i + 1 == j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int ans = INT_MAX;
    for(int k = i + 1; k < j; k++){
        ans = min(ans, helper(i, k, arr, dp) + helper(k, j, arr, dp) + arr[i] * arr[k] * arr[j]);
    }
    return dp[i][j] = ans;
}

int matrixMultiplication(vector<int>& arr){
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n, -1));
    return helper(0, n - 1, arr, dp);
}

int main(){
    vector<int> v = takeInput();
    cout << matrixMultiplication(v);
    return 0;
}