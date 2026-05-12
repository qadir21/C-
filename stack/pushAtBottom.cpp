#include<iostream> 
#include<stack>
using namespace std;

void display(stack<int> s){
    while(s.size()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void pushAtBottom(stack<int>& s, int x){
    // taking a helper stack & put
    stack<int> helper;
    while(s.size()){
        helper.push(s.top());
        s.pop();
    } 

    s.push(x);
    while(helper.size()){
        s.push(helper.top());
        helper.pop();
    }
    return;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(20);
    st.push(40);
    st.push(50);

    // dispaly before any opertion
    display(st);
    pushAtBottom(st, 70);
    display(st);
    return 0;
}