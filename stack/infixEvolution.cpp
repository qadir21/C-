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
}

int main(){
    int x = 2 + 6 * 4 / 8 - 3;
    cout << x << endl;
    string s = "2 + 6 * 4 / 8 - 3"; // infix expression;
    // we need two stacks, 1 for val 1 for opertor 
    stack<int> val;
    stack<char> op;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') continue;
         // check s[i] is a digit (0 - 9)
        if(s[i] >= 48 && s[i] <= 57){
            // digit 
            val.push(s[i] - 48);
        }
        else{
            // not a digit s[i] -> character means an opertor -> + , -   , * /;
            if(!op.size() || prio(s[i]) > prio(op.top())) op.push(s[i]);
            else{
                // work, priority(s[i] <=  priority(op.top()))
                // i have to do val1 operator val2
                while(op.size() > 0 && prio(s[i]) <= prio(op.top())){
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
    // the operator stack can have values.
    // make it empty
    while(op.size() > 0){
        //work
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