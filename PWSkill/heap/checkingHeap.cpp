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

Node* constructBinaryTree(vector<int>& v){
    if(v.size() == 0) return NULL;
    Node* root = new Node(v[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1;
    while(i < v.size()){
        Node* curr = q.front();
        q.pop();
        if(i < v.size()){
            curr->left = new Node(v[i]);
            q.push(curr->left);
            i++;
        }
        if(i < v.size()){
            curr->right = new Node(v[i]);
            q.push(curr->right);
            i++;
        }
    }
    return root;
}

int countNodes(Node* root){
    if(root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void display(vector<int> ans){
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}

bool isCBT(Node* root){
    int count = 0;
    int n = countNodes(root);
    queue<Node*> q;
    q.pop();
    count++;
    while(count < n){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp){
            q.push(temp -> left);
            q.push(temp -> right);
        }

    }
    if(q.size() && q.front()) return false;
    return true;
}

bool isMax(Node* root){
    if(!root) return true;
    if((root -> left && root -> data < root -> left -> data)  || (root -> right &&  root -> data  < root -> right -> data)) return false;
    return isMax(root -> left) && isMax(root -> right);
}

using namespace std;
int main(){
    vector<int> v = takeInput();
    display(v);
    Node * root = constructBinaryTree(v);
    if(isCBT(root) && isMax(root)) cout << "Maxheap" << endl;
    else cout << "Not Maxheap" << endl;
    return 0;
}
