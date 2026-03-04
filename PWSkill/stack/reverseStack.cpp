#include<iostream>
using namespace std;

void display(stack<int> s){
    while(s.size()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    // display stack
    display(st);

    // put st to gt stack
    stack<int> gt;
    while(st.size()){
        gt.push(st.top());
        st.pop();
    }

    // put gt to rt stack
    stack<int> rt;
    while(gt.size()){
        rt.push(gt.top());
        gt.pop();
    }

    // put rt to st stack
    while(rt.size()){
        st.push(rt.top());
        rt.pop();
    }

    display(st);
    return 0;
}