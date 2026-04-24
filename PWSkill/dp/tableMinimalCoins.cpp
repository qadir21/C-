#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solveTab(int target, vector<int>& coins) {
    // 1. INFINITY: target + 1 se initialize kiya taaki INT_MAX ki tarah overflow na ho
    vector<int> dp(target + 1, target + 1);
    
    // 2. BASE CASE: 0 amount banane ke liye hamesha 0 coins lagenge
    dp[0] = 0;

    // 3. OUTER LOOP: Chote amounts se lekar target tak solve karte hain
    for (int i = 1; i <= target; i++) {
        
        // 4. INNER LOOP: Har coin ko try karte hain current amount 'i' banane ke liye
        for (int j = 0; j < coins.size(); j++) {
            int currentCoin = coins[j];
            
            // Check: Kya ye coin current amount se chota ya barabar hai?
            if (i - currentCoin >= 0) {
                
                // IN-PLACE CHANGE: dp table ko update kar rahe hain previous results use karke
                // dp[i-currentCoin] pehle hi calculate ho chuka hai (Bottom-Up)
                dp[i] = min(dp[i], 1 + dp[i - currentCoin]);
            }
        }
    }

    // 5. FINAL CHECK: Agar dp[target] abhi bhi infinity hai, matlab rasta nahi mila
    if (dp[target] > target) return -1;
    
    return dp[target];
}

int main() {
    int n, target;
    if (!(cin >> n >> target)) return 0;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // Function call and output
    cout << solveTab(target, coins) << endl;

    return 0;
}
