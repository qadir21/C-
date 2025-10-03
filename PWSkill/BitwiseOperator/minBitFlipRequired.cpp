#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x;
    cin >> y;
    cout << __builtin_popcount(x ^ y);
    return 0;
}