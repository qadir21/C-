#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;

vector<int> takeInput() {
    vector<int> v;
    string line;
    getline(cin, line); // enter tak input
    istringstream iss(line);
    int x;
    while (iss >> x) v.push_back(x);
    return v;
}


int findKthLargest(vector<int> v, int k){
    int n = v.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        pq.push(v[i]);
        if(pq.size() > k) pq.pop();
    }
    return pq.top();
}

int main(){
    vector<int> v = takeInput();
    int n = v.size();
    int k;
    cin >> k;
    cout << findKthLargest(v, k) << endl;
    return 0;
}