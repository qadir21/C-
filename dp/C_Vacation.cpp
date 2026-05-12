#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    if (!(cin >> n)) return 0;
    // dp[n][3] table to store max happiness for 3 activities
    vector<vector<int>> dp(n, vector<int>(3, 0));
    // 1. Base Case: Pehle din ka input
    int a, b, c;
    cin >> a >> b >> c;
    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;
    // 2. Iterating from Day 1 to n-1
    for(int i = 1; i < n; i++) {
        cin >> a >> b >> c;
        // In-place update using previous day's results
        // Aaj A kiya (0), toh kal B(1) ya C(2) kiya hoga
        dp[i][0] = a + max(dp[i-1][1], dp[i-1][2]);
        // Aaj B kiya (1), toh kal A(0) ya C(2) kiya hoga
        dp[i][1] = b + max(dp[i-1][0], dp[i-1][2]);
        // Aaj C kiya (2), toh kal A(0) ya B(1) kiya hoga
        dp[i][2] = c + max(dp[i-1][0], dp[i-1][1]);
    }
    // 3. Final Result: Last day ki teeno activities mein se jo maximum ho
    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << endl;
    return 0;
}
