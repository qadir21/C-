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


// vector<int>  kSortedArray(vector<int>& v, int k){
//     int n = v.size();
//     vector<int> ans;
//     priority_queue<int, vector<int>, greater<int>> pq; // min heap
//     for(int i = 0; i < n; i++){
//         pq.push(v[i]);
//         if(pq.size() > k){
//             ans.push_back(pq.top());
//             pq.pop();
//         }  
//     }
//     while(pq.size()){
//         ans.push_back(pq.top());
//         pq.pop(); 
//     }
//     return ans;
// }

vector<int>  kSortedArray(vector<int>& v, int k){
    int n = v.size();
    int idx = 0;
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    for(int i = 0; i < n; i++){
        pq.push(v[i]);
        if(pq.size() > k){
            v[idx++] = pq.top();
            pq.pop();
        }  
    }
    while(pq.size()){
        v[idx++] = pq.top();
        pq.pop(); 
    }
    return v;
}


void display(vector<int> ans){
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}

int main(){
    vector<int> v = takeInput();
    display(v);
    int k;
    cin >> k;
    vector<int> ans = kSortedArray(v, k);
    int n = v.size();
    display(ans);
    return 0;
}