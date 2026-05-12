#include<iostream> 
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int n = q.size();
    for(int i = 0; i < n; i++){
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}

void reverse(queue<int>& q){
    stack<int> st;
    int n = q.size();
    for(int i = 0; i < n; i++){
        int x = q.front();
        st.push(x);
        q.pop();
    }
    for(int i = 0; i < n; i++){
        int x = st.top();
        st.pop();
        q.push(x);
    }
}

void revDisplay(queue<int> q){
    stack<int> st;
    int n = q.size();
    for(int i = 0; i < n; i++){
        int x = q.front();
        st.push(x);
        q.pop();
    }
    for(int i = 0; i < n; i++){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    queue<int> q;
    // push , pop, front, size, empty
    // pop, 
    //front -> top
    // size, empty
    // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    cout << q.front() << endl; // front -> fist element
    cout << q.back() << endl; // last element
    cout << q.size() << endl; // no. of element 
    q.pop();
    cout << q.front() << endl; // front -> first element after deletion 
    cout << q.size() << endl; // no. of element in the queue

    display(q); 
    revDisplay(q);
    q.pop();
    display(q);
    reverse(q);
    display(q);
    return 0;
}