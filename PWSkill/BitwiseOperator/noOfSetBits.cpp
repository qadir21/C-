#include<iostream>
using namespace std;

int countSetBits(int n){
    return __builtin_popcount(n);
}

int countSetBits2(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = n & (n - 1);
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << countSetBits2(n);
    return 0;
}