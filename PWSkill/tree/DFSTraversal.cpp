#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(){
        cin >> val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(Node* root){
    if(!root) return;
    cout << root -> val << " "; // root 
    preOrder(root -> left); // left
    preOrder(root -> right);  // right
}

void inOrder(Node* root){
    if(!root) return;
    inOrder(root -> left); // left
    cout << root -> val << " "; // root 
    inOrder(root -> right);  // right
}

void postOrder(Node* root){
    if(!root) return;
    postOrder(root -> left); // left
    postOrder(root -> right);  // right
    cout << root -> val << " "; // root 
}

int main(){
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();
    Node* d = new Node();
    Node* e = new Node();
    Node* f = new Node();
    Node* g = new Node();
    Node* h = new Node();

    a -> left = b;
    a -> right = c;
    b -> left = d;
    b -> right = e;
    c -> left = f;
    c -> right = g;
    e -> right = h;

    preOrder(a);
    cout << endl;
    inOrder(a);
    cout << endl;
    postOrder(a);
    return 0;
}