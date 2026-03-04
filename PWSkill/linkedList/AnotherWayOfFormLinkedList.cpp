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

int main(){
    // 10, 20, 30, 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // Forming linked list;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    //Node* ptr = &b;
    // cout << (*ptr).val;
    //ptr -> val = 60;
    // cout << (*(a.next)).val;
    // cout << (a.next) -> val; 
    Node temp = a;
    while(temp.next != NULL){
        cout << temp.val << " ";
        temp = *(temp.next);
    }
    return 0;
}