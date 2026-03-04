#include<iostream>;
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void display(Node* head){
    while(head){
        cout << head -> val <<  " ";
        head = head -> next;
    }
}

int size(Node* head){
    int s = 0;
    while(head){
        s++;
        head = head -> next;
    }
    return s;
}

void displayRec(Node* head){
    if(!head) return;
    cout << head -> val << " ";
    displayRec(head -> next);
}

void reverseDisplay(Node* head){
    if(!head) return;
    reverseDisplay(head -> next);
    cout << head -> val << " "; 
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a -> next = b;
    b -> next = c;
    c -> next = d;

    display(a);
    cout << endl;
    cout << size(a);
    cout << endl;
    displayRec(a);
    cout << endl;
    reverseDisplay(a);
}