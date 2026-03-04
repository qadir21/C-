#include<iostream>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2; // * , /
}

string solve(string x1, string x2, char c){
    // we have to store in the answar 
    // postfix is -> val1 val2 op
    string s = ""; 
    s += x1;
    s += x2;
    s.push_back(c); 
    return s;
}

int main(){
    int x = (2 + 6) * 4 / 8 - 3;
    cout << x << endl;
    string s = "(7 + 9) * 4 / 8 - 3";
    stack<string> val;
    stack<char> op;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') continue;

        if(s[i] >= 48 && s[i] <= 57){
            val.push(to_string(s[i] - 48));
        }
        else{
            if(s[i] == '(') op.push(s[i]);

            else if(s[i] == ')') {
                while(op.top() != '('){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop(); // opening bracket ko bhi uda denge
            }

            else{
                if(!op.size() || op.top() == '(' || prio(s[i]) > prio(op.top())) op.push(s[i]);
                else{
                    while(op.size() > 0 && op.top() != '(' && prio(s[i]) <= prio(op.top())){
                        char ch = op.top();
                        op.pop();
                        string val2 = val.top();
                        val.pop();
                        string val1 = val.top();
                        val.pop();
                        string ans = solve(val1, val2, ch);
                        val.push(ans);
                    }
                    op.push(s[i]);
                }
            }
        }
    } 

    while(op.size() > 0){
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans); 
    }
    cout << val.top() << endl;
    return 0;
}