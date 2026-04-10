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

bool isCBT(Node* root, int index, int total){
    if(root == NULL) return true;
    if(index >= total) return false;
    return isCBT(root->left, 2*index + 1, total) && isCBT(root->right, 2*index + 2, total);
}

bool isMaxHeap(Node* root){
    if(root == NULL) return true;

    if(root->left == NULL && root->right == NULL) return true;
    if(root->right == NULL) return root->data >= root->left->data;
    if(root->data >= root->left->data && root->data >= root->right->data) return isMaxHeap(root->left) && isMaxHeap(root->right);
    return false;
}

bool isHeap(Node* root){
    int total = countNodes(root);
    if(isCBT(root,0,total) && isMaxHeap(root)) return true;
    return false;
}

void display(vector<int> ans){
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}

int main(){
    vector<int> v = takeInput();
    display(v);
    Node* root = constructBinaryTree(v);
    if(isHeap(root))
        cout << "Yes Heap\n";
    else
        cout << "Not Heap\n";

    return 0;
}