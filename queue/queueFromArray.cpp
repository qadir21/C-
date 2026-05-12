#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f, r;
    vector<int> arr;

    Queue(int val){
        f = 0;
        r = 0;
        arr.resize(val);
    }

    void push(int val){
        if(r == arr.size()){
            cout << "Queue is full." << endl;
            return;
        }
        arr[r++] = val;
    }

    void pop(){
        if(f == r){
            cout << "Queue is empty." << endl;
            return;
        }
        f++;
    }

    int front(){
        if(f == r){
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[f];
    }

    int rear(){
        if(f == r){
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[r-1];
    }

    int size(){
        return r - f;
    }

    bool empty(){
        return f == r;
    }

    void display(){
        for(int i = f; i < r; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){

    Queue q(6);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();

    q.push(50);
    q.push(60);
    q.display();

    q.pop();
    q.display(); 

    cout << q.empty() << endl;
    cout << q.size() << endl;
    cout << q.rear() << endl; 
    cout << q.front() << endl;

    return 0;
}