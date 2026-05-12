#include<iostream>
#include<queue>
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

void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()){
        Node* temp = q.front();
        q.pop();
        cout << temp -> val << " ";
        if(temp -> left) q.push(temp -> left);
        if(temp -> right) q.push(temp -> right);
    }
    cout << endl;
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

    levelOrderQueue(a);
    return 0;
}