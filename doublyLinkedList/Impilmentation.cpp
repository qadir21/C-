#include<iostream> 
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev; // extra  for DLL
        Node(int val){
            this -> val = val;
            this -> next = NULL;
            this -> prev = NULL; // extra for DLL
        }
};

void display(Node* head){
    while(head){
        cout << head -> val << " ";
        head = head -> next;
    }
    cout << endl;
}

void display1(Node* tail){
    while(tail){
        cout << tail -> val <<  " ";
        tail = tail -> prev;
    }
    cout << endl;
}

void displayRec(Node * head){
    if(head == NULL) return;
    cout << head -> val << " ";
    displayRec(head -> next);
}

void displayRec1(Node * head){
    if(head == NULL) return;
    displayRec1(head -> next);
    cout << head -> val << " ";
}

void displayRec2(Node * tail){
    if(tail == NULL) return;
    displayRec2(tail -> prev);
    cout << tail -> val << " ";
}

void displayRec3(Node * tail){
    if(tail == NULL) return;
    cout << tail -> val << " ";
    displayRec3(tail -> prev);
}

int main(){
    // 10 20 30 40 50
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);

    // forward connection
    a -> next = b;
    b -> next = c;
    c -> next = d;
    d -> next = e;
    e -> next = f;
    f -> next = g;

    // backword connection
    b -> prev = a;
    c -> prev = b;
    d -> prev = c;
    e -> prev = d;
    f -> prev = e;
    g -> prev = f;

    display(a);
    display1(g);

    displayRec(a);
    cout << endl;
    displayRec1(a);
    cout << endl;
    displayRec2(g);
    cout << endl;
    displayRec3(g);
    cout << endl;
}