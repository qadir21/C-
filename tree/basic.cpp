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

int sum(Node* root){
    if(!root) return 0;
    return root -> val + sum(root -> left) + sum(root -> right);
}

void displayTree(Node* root){
    if(!root) return;
    cout << root -> val << " ";
    displayTree(root -> left);
    displayTree(root -> right); 
}

int size(Node* root){
    if(!root) return 0;
    return 1 + size(root -> left) + size(root -> right);
}

int maxValue(Node * root){
    if(!root) return INT_MIN;
    int ans = root -> val;
    int lAns = maxValue(root -> left);
    int rAns = maxValue(root -> right);
    return ans > lAns ? ans : (lAns > rAns ? lAns : rAns) ;
}

int prod(Node* root){
    if(!root) return 1;
    return root -> val * prod(root -> left) * prod(root -> right);
}

int minValue(Node * root){
    if(!root) return INT_MAX;
    int ans = root -> val;
    int lAns = minValue(root -> left);
    int rAns = minValue(root -> right);
    return ans < lAns ? ans : (lAns < rAns ? lAns : rAns);
}

int level(Node* root){
    if(!root) return 0;
    return 1 + max(level(root -> left), level(root -> right));
}

int height(Node * root){
    return level(root) - 1;
}

int noOfEdges(Node* root){
    return size(root) - 1;
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
    displayTree(a);
    cout << endl;
    cout << sum(a) << endl;
    cout << size(a) << endl;;
    cout << maxValue(a) << endl;
    cout << prod(a) << endl;
    cout << minValue(a) << endl;
    cout << level(a) << endl;
    cout << height(a) << endl;
    cout << noOfEdges(a) << endl;
    return 0;
}