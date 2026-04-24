#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int minstep(int n, vector<int>& dp){
    for(int i = 4; i <= n; i++){
        dp[i] = 1 + min({
            dp[i - 1],
            i % 2 == 0 ? dp[i / 2] : INT_MAX,
            i % 3 == 0 ? dp[i / 3] : INT_MAX
        });
    }
    return dp[n];
}
int main(){
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    dp[1] = 0;
    if(n >= 2) dp[2] = 1;
    if(n >= 3) dp[3] = 1;
    cout << minstep(n, dp);
    return 0;
}