#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s){
    if(s.length() % 2) return false;
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') st.push(s[i]);
        else{
            if(!st.size()) return false;
            else st.pop();
        }
    }
    if(!st.size()) return true;
    else return false;
}

int main(){
    string s;
    getline(cin, s);
    cout << isBalanced(s) << endl;
    return 0;
}