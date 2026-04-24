#include<iostream>
#include<sstream>
#include<vector>
#include<queue>
#include <unordered_map>
#include <climits>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// 🔥 Input function (NULL handle karega)
vector<string> takeInput() {
    vector<string> v;
    string line;
    getline(cin, line);
    istringstream iss(line);
    string x;
    while (iss >> x) v.push_back(x);
    return v;
}

// 🔥 Tree construction with NULL support
Node* constructBinaryTree(vector<string>& v){
    if(v.size() == 0 || v[0] == "NULL") return NULL;
    Node* root = new Node(stoi(v[0]));
    queue<Node*> q;
    q.push(root);
    int i = 1;
    while(!q.empty() && i < v.size()){
        Node* curr = q.front();
        q.pop();
        // left child
        if(i < v.size() && v[i] != "NULL"){
            curr->left = new Node(stoi(v[i]));
            q.push(curr->left);
        }
        i++;
        // right child
        if(i < v.size() && v[i] != "NULL"){
            curr->right = new Node(stoi(v[i]));
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

// 🔥 Traversal
void levelorder(Node* root){
    if(!root) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        while(size--){
            Node* curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        cout << endl; // new level
    }
}


void display(vector<string> ans){
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}

void displayVec(vector<int> ans){
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}

vector<int> topView(Node* root){
    vector<int> ans;
    if(!root) return ans;
    unordered_map<int, int> m;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        Node* temp = q.front().first;
        int level = q.front().second;
        q.pop();
        if(m.find(level) == m.end()){
            m[level] = temp->data;
        }
        if(temp->left){
            q.push({temp->left, level - 1});
        }
        if(temp->right){
            q.push({temp->right, level + 1});
        }
    }
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for(auto x : m){
        minLevel = min(minLevel, x.first);
        maxLevel = max(maxLevel, x.first);
    }
    for(int i = minLevel; i <= maxLevel; i++){
        ans.push_back(m[i]);
    }
    return ans;
}

int main(){
    vector<string> v = takeInput();
    display(v);
    Node* root = constructBinaryTree(v);
    levelorder(root);
    vector<int> ans = topView(root);
    displayVec(ans);
    return 0;
}