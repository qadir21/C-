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
    string s = "79+4*8/3-";
    stack<int> val;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 48 && s[i] <= 57){
            val.push(s[i] - 48);
        }
        else{
            // kaam 
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1, val2, s[i]);
            val.push(ans);
        }  
    }
    cout << val.top() << endl;
    return 0;
}