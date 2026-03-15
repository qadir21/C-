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

// void nThLevel(Node* root, int curr, int level){
//     if(!root) return;
//     if(curr == level){
//         cout << root -> val << " "; // root
//         return;
//     } 
//     nThLevel(root -> left, curr + 1, level); // left
//     nThLevel(root -> right, curr + 1, level);  // right
// }

// void nThLevel(Node* root, int curr, int level){
//     if(!root) return;
//     if(curr == level){
//         cout << root -> val << " "; // root
//         return;
//     } 
//     nThLevel(root -> right, curr + 1, level);  // right
//     nThLevel(root -> left, curr + 1, level); // left
// }

void nThLevel(Node* root, int curr, int level){
    if(!root) return;
    nThLevel(root -> right, curr + 1, level);  // right
    nThLevel(root -> left, curr + 1, level); // left
    if(curr == level){
        cout << root -> val << " "; // root
        return;
    } 
}



int level(Node* root){
    if(!root) return 0;
    return 1 + max(level(root -> left), level(root -> right));
}

void levelOrder(Node* root){
    int n = level(root);
    for(int i = 1; i <= n ; i++){
        nThLevel(root, 1, i);
        cout << endl;
    } 
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

    levelOrder(a);

    return 0;
}