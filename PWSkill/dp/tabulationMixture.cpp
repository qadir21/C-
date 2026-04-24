#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Helper function to get color sum in range [i, j] % 100
int getSum(int i, int j, const vector<int>& colors) {
    int s = 0;
    for (int k = i; k <= j; k++) {
        s = (s + colors[k]) % 100;
    }
    return s;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> colors(n);
        for (int i = 0; i < n; i++) cin >> colors[i];

        // dp[i][j] stores min smoke for range i to j
        // Initialize with a very large value
        vector<vector<long long>> dp(n, vector<long long>(n, 0));

        // L is the length of the interval we are solving
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                dp[i][j] = 1e18; // Infinity

                // k is the split point
                for (int k = i; k < j; k++) {
                    long long smoke = dp[i][k] + dp[k+1][j] + 
                                     (1LL * getSum(i, k, colors) * getSum(k+1, j, colors));
                    
                    if (smoke < dp[i][j]) {
                        dp[i][j] = smoke;
                    }
                }
            }
        }

        cout << dp[0][n - 1] << endl;
    }
    return 0;
}
