#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

// Memory efficiency ke liye global array (N, M up to 2000, K up to 5)
// long long ki jagah int use karein agar LCS length 2*10^9 se choti hai (Fast)
int dp[2005][2005][6];
int A[2005], B[2005];
int M, N, K_val;

int solve(int i, int j, int k) {
    // 1. Base Case
    if (i == M || j == N) return 0;

    // 2. Memoization Check
    if (dp[i][j][k] != -1) return dp[i][j][k];

    int res = 0;

    // 3. Choice 1: Natural Match
    if (A[i] == B[j]) {
        res = 1 + solve(i + 1, j + 1, k);
    } else {
        // 4. Choice 2: Mismatch
        // Option A: Skip from A or B
        res = max(solve(i + 1, j, k), solve(i, j + 1, k));
        
        // Option B: Force Match (if k > 0)
        if (k > 0) {
            res = max(res, 1 + solve(i + 1, j + 1, k - 1));
        }
    }

    return dp[i][j][k] = res;
}

int main() {
    // FAST I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> M >> N >> K_val)) return 0;

    for (int i = 0; i < M; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    // Initialize DP with -1
    memset(dp, -1, sizeof(dp));

    cout << solve(0, 0, K_val) << endl;

    return 0;
}
