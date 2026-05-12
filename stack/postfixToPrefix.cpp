#include<iostream>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2; // * , /
}

string solve(string x1, string x2, char c){
    string s = "";
    s.push_back(c);
    s += x1;
    s += x2;
    return s;
}

int main(){
    string s = "79+4*8/3-";
    stack<string> val;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 48 && s[i] <= 57){
            val.push(to_string(s[i] - 48));
        }
        else{
            // kaam 
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }  
    }
    cout << val.top() << endl;
    return 0;
}