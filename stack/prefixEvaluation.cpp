#include<iostream>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2; // * , /
}

int solve(int x1, int x2, char c){
    if(c == '+') return x1 + x2;
    if(c == '-') return x1 - x2; 
    if(c == '*') return x1 * x2; 
    if(c == '/') return x1 / x2;  
}

int main(){
    string s = "-/*+79483";
    stack<int> val;
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] >= 48 && s[i] <= 57){
            val.push(s[i] - 48);
        }
        else{
            // kaam 
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = solve(val1, val2, s[i]);
            val.push(ans);
        }  
    }
    cout << val.top() << endl;
    return 0;
}