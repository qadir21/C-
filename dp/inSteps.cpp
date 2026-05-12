/*
Approach:
1. We need minimum steps to reduce n to 1.

Allowed operations:
- n = n - 1
- if divisible by 2 -> n = n / 2
- if divisible by 3 -> n = n / 3

2. Use DP + Memoization.

3. dp[n] stores minimum steps for n.

4. Try all valid operations and take minimum.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int minstep(int n, vector<int>& dp) {
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];
    int ans = minstep(n - 1, dp);
    if(n % 2 == 0) {
        ans = min(ans, minstep(n / 2, dp));
    }
    if(n % 3 == 0) {
        ans = min(ans, minstep(n / 3, dp));
    }
    return dp[n] = 1 + ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << minstep(n, dp) << endl;
    return 0;
}