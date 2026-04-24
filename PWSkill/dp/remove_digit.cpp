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

int minstep(int num){
    vector<int> dp(num + 1, INT_MAX);
    dp[0] = 0;
    for(int i = 1; i <= 9 && i <= num; i++){
        dp[i] = 1;
    }
    for(int n = 10; n <= num; n++){
        vector<int> d = getDigits(n);
        int result = INT_MAX;
        for(int i = 0; i < d.size(); i++){
            result = min(result, dp[n - d[i]]);
        }
        dp[n] = 1 + result;
    }
    return dp[num];
}

int main(){
    int n;
    cin >> n;
    cout << minstep(n);
    return 0;
}