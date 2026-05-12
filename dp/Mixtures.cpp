#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int n;
int colors[105];
long long dp[105][105];

// Helper to get sum of colors in range [i, j] mod 100
int getSum(int i, int j) {
    int s = 0;
    for (int k = i; k <= j; k++) {
        s = (s + colors[k]) % 100;
    }
    return s;
}

long long solve(int i, int j) {
    // Base Case: Single mixture produces no smoke
    if (i >= j) return 0;

    // Memoization check
    if (dp[i][j] != -1) return dp[i][j];

    long long minSmoke = 1e18; // Very large value

    // Trying every possible split point k
    for (int k = i; k <= j - 1; k++) {
        // Formula: smoke from left + smoke from right + smoke from mixing results
        long long currentSmoke = solve(i, k) + solve(k + 1, j) + (getSum(i, k) * getSum(k + 1, j));
        
        if (currentSmoke < minSmoke) {
            minSmoke = currentSmoke;
        }
    }

    return dp[i][j] = minSmoke;
}

int main() {
    // Handling multiple test cases
    while (cin >> n) {
        for (int i = 0; i < n; i++) cin >> colors[i];

        // Reset DP table for each test case
        memset(dp, -1, sizeof(dp));

        cout << solve(0, n - 1) << endl;
    }
    return 0;
}
