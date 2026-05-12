#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> takeInput(int n){ // Maine n ko argument bana diya logic clean rakhne ke liye
    vector<int> coins;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        coins.push_back(num);
    }
    return coins;
}

int minimalCoins(int x, vector<int>& coins, vector<int>& dp){
    if(x == 0) return 0;
    if(dp[x] != -1) return dp[x];
    int result = INT_MAX;
    for(int i = 0; i < coins.size(); i++){
        if(x - coins[i] < 0) continue;
        int subproblem = minimalCoins(x - coins[i], coins, dp);
        // Check: Sirf tabhi update karein agar raasta mila ho (not INT_MAX)
        if(subproblem != INT_MAX){
            result = min(result, subproblem);
        }
    }
    // FIX HERE: Agar result INT_MAX hi raha, toh 1 add mat karo
    if(result == INT_MAX) return dp[x] = INT_MAX;
    
    return dp[x] = 1 + result;
}

int main(){
    int n, x;
    // Standard format: pehle n (coins count) aur x (target) le lo
    if(!(cin >> n >> x)) return 0;     
    vector<int> coins = takeInput(n);
    vector<int> dp(x + 1, -1);
    int ans = minimalCoins(x, coins, dp);
    // Final check: Agar target nahi bana toh -1 print karein
    if(ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
