#include<iostream> 
using namespace std;

class Node{ // User defined data type
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this -> val = val;
            this -> next = NULL;
            this -> prev = NULL;
        }
};

class Deque{ // User defined data structure
    public:
        Node* head;
        Node* tail;
        int s;
        
        Deque(){
            head = tail = NULL;
            s = 0;
        }

        void pushBack(int val){
            Node* temp = new Node(val);
            if(s == 0) head = tail = temp;
            else{
                tail -> next = temp;
                temp -> prev = tail; // extra
                tail = temp;
            }
            s++;
        }

        void pushFront(int val){
            Node* temp = new Node(val);
            if(s == 0) head = tail = temp;
            else{
                temp -> next = head;
                head -> prev = temp; // extra
                head = temp;
            }
            s++;
        }

        void popFront(){
            if(s == 0) cout << "Empty LinkedList deletion is not possible" << endl;
            else{
                head = head -> next;
                s--;
            }
        }

        void popBack(){
            Node* temp = head;
            if(head == tail) popFront();
            else{
                while(temp -> next -> next){
                    temp = temp -> next;
                }
                tail = temp;
                tail -> next = NULL;
                s--;
            }
        }

        void display(){
            Node *temp = head;
            while(temp){
                cout << temp -> val << " ";
                temp = temp -> next;
            } 
            cout << endl;
        }

        int front(){
            if(s == 0) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return head -> val;
        }

        int rear(){
            if(s == 0) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return tail -> val;
        }

        bool empty(){
            if(s);
        }

        int size(){
            return s;
        }
};

int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.display();
    dq.popFront();
    dq.display();
    return 0;
}