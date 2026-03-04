#include<iostream> 
#include<stack>
using namespace std;

void display(stack<int> s){
    while (s.size())
    {
        cout << s.top() << " ";
        s.pop();  
    }
    cout << endl;
}

void displayReverse(stack<int> s){
    stack<int> temp;
    while(s.size()){
        temp.push(s.top());
        s.pop();
    } 
    while(temp.size()){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

void reverseRecDisplay(stack<int> s){
    if(!s.size()) return;
    int x = s.top();
    s.pop();
    reverseRecDisplay(s);
    cout << x << " ";
}

int main(){
    stack<int>  st;
    cout << st.size() << endl;
    st.push(10);
    cout << st.size() << endl;
    st.push(20);
    cout << st.size() << endl;
    st.push(30);
    cout << st.size() << endl;
    st.push(40);
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.push(40);
    st.push(50);
    display(st);
    cout << st.size() << endl;
    displayReverse(st);
    reverseRecDisplay(st);
    cout << endl;
    return 0;
} 