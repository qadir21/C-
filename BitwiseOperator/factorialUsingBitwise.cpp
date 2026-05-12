#include<iostream>
using namespace std;

vector<int> factorial(int n){
    vector<int> fact(n - 1, 1);
    int MOD = 10000000000 + 7;
    for(int i = 2; i <= n; i++){
        fact[i] = (i % MOD * fact[i - 1] % MOD) % MOD;
    }
    return fact;
}

int main(){
    int n;
    cin >> n;
    vector<int> res = factorial(n);
    for(int i = 0; i < res.size(); i++){
        cout << i << " " <<  res[i] << " ";
    }
    return 0;
}