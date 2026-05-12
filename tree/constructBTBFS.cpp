#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void takeInput(vector<int>& v){
    string s;
    while(cin >> s){
        if(s == "NULL") v.push_back(NULL);
        else v.push_back(stoi(s));
    }
}

Node* construct(vector<int> v){
    int n = v.size();
    if(n == 0 || v[0] == NULL) return NULL;

    queue<Node*> q;
    Node* root = new Node(v[0]);
    q.push(root);

    int i = 1;
    int j = 2;

    while(!q.empty() && i < n){
        Node* temp = q.front();
        q.pop();

        Node* l = NULL;
        Node* r = NULL;

        if(i < n && v[i] != NULL) l = new Node(v[i]);
        if(j < n && v[j] != NULL) r = new Node(v[j]);

        temp->left = l;
        temp->right = r;

        if(l) q.push(l);
        if(r) q.push(r);

        i += 2;
        j += 2;
    }

    return root;
}

void levelOrderQueue(Node* root){
    if(!root) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << temp->val << " ";

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

int main(){
    vector<int> arr;

    takeInput(arr);

    Node* root = construct(arr);

    levelOrderQueue(root);

    return 0;
}