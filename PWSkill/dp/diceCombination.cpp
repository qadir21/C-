#include <iostream>
#include <vector>
using namespace std;
// Separate method for Tabulation logic
long long solveTab(int n) {
    const int MOD = 1e9 + 7;
    // DP array initialization
    // dp[i] = number of ways to get sum 'i'
    vector<long long> dp(n + 1, 0);
    // BASE CASE: Sum 0 banane ka 1 tarika hai
    dp[0] = 1;
    // OUTER LOOP: Har target 'i' ke liye 1 se n tak calculate karte hain
    for (int i = 1; i <= n; i++) {
        // INNER LOOP: Dice ke 6 faces (1 to 6) try karte hain
        for (int dice = 1; dice <= 6; dice++) {
            // Agar current sum 'i' dice value se bada ya barabar hai
            if (i - dice >= 0) {
                // IN-PLACE CHANGE: Agla state pichle states ka sum hai
                dp[i] = (dp[i] + dp[i - dice]) % MOD;
            }
        }
    }
    return dp[n];
}

int main() {
    int n;
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!(cin >> n)) return 0;
    // Final answer from separate tabulation method
    cout << solveTab(n) << endl;
    return 0;
}
