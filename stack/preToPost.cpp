#include<iostream>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2; // * , /
}

string solve(string x1, string x2, char c){
    // we have to store in the answar 
    // pre to post -> val1  op val2
    string s = ""; 
    s += x1;
    s += x2;
    s.push_back(c); 
    return s;
}

int main(){
    string s = "-/*+79483";
    stack<string> val;
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] >= 48 && s[i] <= 57){
            val.push(to_string(s[i] - 48));
        }
        else{
            // kaam 
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }  
    }
    cout << val.top() << endl;
    return 0;
}