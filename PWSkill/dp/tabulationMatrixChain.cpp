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

int matrixMultiplication(vector<int>& arr) {
    int n = arr.size();
    // Step 1: Initialize DP table with 0
    // (Base case i+1 == j automatically 0 ho jayega)
    vector<vector<int>> dp(n, vector<int>(n, 0));
    // Step 2: 'len' denotes the number of dimensions in the current chain
    for (int len = 3; len <= n; len++) {
    // Step 3: 'i' is the starting index
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1; // Ending index
                dp[i][j] = 1e9; // Initializing with a large value
                // Step 4: 'k' is the split point between i and j
                for (int k = i + 1; k < j; k++) {
                    int cost = dp[i][k] + dp[k][j] + (arr[i] * arr[k] * arr[j]);
                    // In-place update within the DP table
                    if (cost < dp[i][j]) {
                        dp[i][j] = cost;
                    }
                }
            }
        }
    // Final result for the entire chain (0 to n-1)
    return dp[0][n - 1];
    }

int main(){
    vector<int> v = takeInput();
    cout << matrixMultiplication(v);
    return 0;
}