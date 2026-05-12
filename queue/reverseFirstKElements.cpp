#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void takeInput(queue<int>& q){
    int x;
    while (cin >> x) q.push(x);
    
}

void display(queue<int>& q){
    int n = q.size();
    for(int i = 0; i < n; i++){
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    cout << endl;
}

void reorder(queue<int>& q){
    stack<int> st;
    int n = q.size();
    // pop Fisrt half and move it to stack
    for(int i = 0; i < n / 2; i++){
        st.push(q.front());
        q.pop();
    }
    // pop from st and push to q
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    // 1st (2nd) half move to stack
    for(int i = 0; i < n / 2; i++){
        st.push(q.front());
        q.pop();
    }
    // main works
    // stack to q 
    // q  to q
    while(st.size()){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // push whole q to stack and stack to q
    while(q.size()){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    } 
}


int main(){
    queue<int> q;
    takeInput(q); 
    display(q);
    reorder(q);
    display(q);
    return 0;
}