#include<iostream> 
using namespace std;

class Node{ // User defined data type
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

class LinkedList{ // User defined data structure
    public:
        Node* head;
        Node* tail;
        int size;
        
        LinkedList(){
            head = tail = NULL;
            size = 0;
        }

        void insertAtTail(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                tail -> next = temp;
                tail = temp;
            }
            size++;
        }

        void insertAtHead(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                temp -> next = head;
                head = temp;
            }
            size++;
        }

        void insertAt(int idx, int val){
            if(idx < 0 || idx > size) cout << "invalid Index " << endl;
            else if(idx == 0) insertAtHead(val);
            else if(idx == size) insertAtTail(val);
            else{
                Node* t = new Node(val);
                Node* temp = head;
                int i = 1;
                while(i < idx){
                    temp = temp -> next;
                    i++;
                }
                t -> next = temp -> next;
                temp -> next = t;
                size++;
            }
        }

        int getAt(int idx){
            if(idx < 0 || idx >= size){
                cout << "Invalid Index" << endl;
                return -1;
            }
            else if(idx == 0) return head -> val;
            else if(idx == size - 1) return tail->val;
            else{
                int i = 1;
                Node* temp = head;
                while(i <= idx){
                    temp = temp -> next;
                    i++;
                }
                return temp -> val;
            }
        }

        void deleteAtHead(){
            if(size == 0) cout << "Empty LinkedList deletion is not possible" << endl;
            else{
                head = head -> next;
                size--;
            }
        }

        void deleteAtTail(){
            Node* temp = head;
            if(head == tail) deleteAtHead();
            else{
                while(temp -> next -> next){
                    temp = temp -> next;
                }
                tail = temp;
                tail -> next = NULL;
                size--;
            }
        }

        void deleteAt(int idx){
            if(idx < 0 || idx >= size) cout << "Invalid deletion" << endl;
            else if(idx == 0) deleteAtHead();
            else if(idx == size - 1) deleteAtTail(); 
            else{
                Node* temp = head;
                int i = 1;
                while(i < idx){
                    temp = temp -> next;
                    i++;
                }
                temp -> next = temp -> next -> next;
                size--;
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
};

int main(){
    // int* arr = new int[6];
    LinkedList ll; // { }
    ll.insertAtTail(10); // {10 -> NULL}
    ll.display();
    ll.insertAtTail(20); // {10 -> 20 -> NULL}
    ll.display();
    cout << ll.size << endl;
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    cout << ll.size << endl;
    ll.insertAtHead(23); 
    ll.display();
    cout << ll.size << endl;
    ll.insertAt(2, 17);
    ll.display();
    cout << ll.getAt(3) << endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAt(1);
    ll.display();
    ll.deleteAt(1);
    ll.display();
    ll.deleteAt(1);
    ll.display();
    return 0;
}