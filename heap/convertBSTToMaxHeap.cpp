#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insertBST(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}

Node* constructBST(const vector<int>& v) {
    Node* root = nullptr;
    for (int val : v)
        root = insertBST(root, val);
    return root;
}

void inorderTrversal(Node* root) {
    if (!root) return;
    inorderTrversal(root->left);
    cout << root->data << " ";
    inorderTrversal(root->right);
}

void inorder(Node* root, vector<int>& arr){
    if(!root) return;
    inorder(root -> right, arr);
    arr.push_back(root -> data);
    inorder(root -> left, arr);
}

// creting maxHeap 
void preorder(Node* root, vector<int>& arr, int& i){
    if(!root) return;
    root -> data = arr[i++];
    preorder(root -> left, arr, i);
    preorder(root -> right, arr, i);
}


// Function to take input from user as a line
vector<int> takeInput() {
    vector<int> v;
    string line;
    getline(cin, line); // ek line me input lena
    istringstream iss(line);
    int x;
    while (iss >> x)
        v.push_back(x);
    return v;
}

void levelOrderQueue(Node* root){
    if(!root) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout << temp-> data << " ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

void display(vector<int> v){
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}

int main() {
    vector<int> v = takeInput();
    display(v);
    Node* root = constructBST(v);
    inorderTrversal(root);
    cout << endl;
    vector<int> arr;
    inorder(root, arr);
    display(arr);
    int i = 0;
    preorder(root, arr, i);
    levelOrderQueue(root);
    return 0;
}