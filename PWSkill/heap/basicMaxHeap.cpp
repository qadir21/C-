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
    return 0;
}