#include<iostream> 
#include<vector>
using namespace std;

long long combi(int n, vector<long long>& dp){
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    long long sum = 0;
    for(int i = 1; i <= 6; i++){
        if(n - i < 0) break; // agar i > n hoga to aage vale to honge hi nhi
        sum = (sum % 1000000007 + combi(n - i, dp) % 1000000007) % 1000000007;
    }
    return dp[n] = sum % 1000000007;
}

int main(){
    vector<long long> dp(1000005, -1);
    int n;
    cin >> n;
    cout << combi(n, dp) << endl;
}