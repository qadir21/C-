#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> getDigits(int n){
    vector<int> result;

    while(n){
        int d = n % 10;
        if(d != 0){
            result.push_back(d);
        }
        n /= 10;
    }
    return result;
}

int minstep(int n, vector<int>& dp){
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];
    vector<int> d = getDigits(n);
    int result = INT_MAX;
    for(int i = 0; i < d.size(); i++){
        result = min(result, minstep(n - d[i], dp));
    }
    return dp[n] = 1 + result;
}

int main(){
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << minstep(n, dp);
    return 0;
}