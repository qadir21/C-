#include<iostream>
#include<stack>
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
    return 0;
}

int main(){
    int x = (2 + 6) * 4 / 8 - 3;
    cout << x << endl;
    string s = "(2 + 6) * 4 / 8 - 3";
    stack<int> val;
    stack<char> op;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') continue;

        if(s[i] >= 48 && s[i] <= 57){
            val.push(s[i] - 48);
        }
        else{
            if(s[i] == '(') op.push(s[i]);

            else if(s[i] == ')') {
                while(op.top() != '('){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop();
            }

            else{
                if(!op.size() || op.top() == '(' || prio(s[i]) > prio(op.top())) op.push(s[i]);
                else{
                    while(op.size() > 0 && op.top() != '(' && prio(s[i]) <= prio(op.top())){
                        char ch = op.top();
                        op.pop();
                        int val2 = val.top();
                        val.pop();
                        int val1 = val.top();
                        val.pop();
                        int ans = solve(val1, val2, ch);
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
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans); 
    }
    cout << val.top() << endl;
    return 0;
}