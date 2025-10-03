#include<iostream> 
using namespace std;

int maxPowerOfTwo(int n){
    n = n | n >> 1;
    n = n | n >> 2;
    n = n | n >> 4;
    n = n | n >> 8;
    n = n | n >> 16;
    return (n + 1) >> 1;
}


int main(){
    int n, temp;
    cin >> n;
    // while(n != 0){
    //     temp = n;
    //     n = n & (n - 1);
    // }
    // cout <<temp;

    cout << maxPowerOfTwo(n);
}