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

class DLL{ // User defined data structure
    public:
        Node* head;
        Node* tail;
        int size;
        
        DLL(){
            head = tail = NULL;
            size = 0;
        }

        void insertAtTail(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                tail -> next = temp;
                temp -> prev = tail; // extra
                tail = temp;
            }
            size++;
        }

        void insertAtHead(int val){
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else{
                temp -> next = head;
                head -> prev = temp; // extra
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
                t -> prev = temp; // extra
                t -> next -> prev = t; // extra
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
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40); 
    list.display();
    list.insertAtTail(50);
    list.insertAtTail(60);  
    list.display();
    list.insertAtHead(12);
    list.display();
    list.insertAt(2, 17);
    list.display();
    return 0;
}