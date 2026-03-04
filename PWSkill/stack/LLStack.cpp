#include<iostream>
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

class Stack{
public:
    Node* head;
    int size;

    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if(size == 0){
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int top(){
        if(size == 0){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->val;
    }

    int getSize(){
        return size;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.display();
    cout << st.getSize() << endl;
    cout << st.top() << endl;

    st.pop();
    st.display();

    return 0;
}