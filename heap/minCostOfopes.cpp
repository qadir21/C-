// Minimum cost to connect all ropes gfg problem
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

int minCost(vector<int>& arr) {
    int n = arr.size();
    int minCost = 0;
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    for(int i = 0; i < n; i++) pq.push(arr[i]);
    while(pq.size() > 1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        pq.push(x + y);
        minCost += (x + y);
    }
    return minCost;
}

void display(vector<int> ans){
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}

int main(){
    vector<int> v = takeInput();
    display(v);
    cout << minCost(v) << endl;
    return 0;
}

