#include<iostream>
#include<queue>  
using namespace std;
int main(){
    priority_queue<int> pq; // by default max heap is created
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    cout << pq.top() << endl;
    pq.push(81);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> p;
    p.push(10);
    p.push(2);
    p.push(-6);
    p.push(8);
    cout << p.top() << endl;
    p.push(-81);
    cout << p.top() << endl;
    p.pop();
    cout << p.top() << endl;
    return 0;
}