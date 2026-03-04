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

void pushAt(stack<int>& s, int idx, int val){
    if(idx < 0){
        cout << "Index negative hai… isliye idx = 0 set kiya ja raha hai." << endl;
        idx = 0;
    }
    if(idx > s.size()){
        cout << "Index size se bada hai… isliye idx = " << s.size() << " set kiya ja raha hai." << endl;
        idx = s.size();
    }
    stack<int> helper;
    while(s.size() > idx + 1){
        helper.push(s.top());
        s.pop();
    }
    s.push(val);
    while(helper.size()){
        s.push(helper.top());
        helper.pop();
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // dispaly before any opertion
    display(st);
    pushAt(st, 2, 90);
    display(st);
    return 0;
}