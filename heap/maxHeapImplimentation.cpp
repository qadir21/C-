#include<iostream> 
using namespace std;


class MaxHeap{

private:

    int* arr;
    int capacity;
    int idx;
    void resize(){
        capacity *= 2;
        int* newArr = new int[capacity];
        for(int i = 0; i <= idx; i++) newArr[i] = arr[i];

        delete[] arr;
        arr = newArr;
    }

public:

    MaxHeap(){
        capacity = 2;
        idx = -1;
        arr = new int[capacity];
    }

    int top(){
        return arr[0];
    }

    void push(int val){
        if(idx + 1 >= capacity) resize();

        idx++;
        arr[idx] = val;
        int i = idx;
        while(i > 0){
            int par = (i - 1) / 2;
            if(arr[i] > arr[par]){
                swap(arr[i], arr[par]);
                i = par;
            }
            else break;
        }
    }

    void pop(){
        if(idx < 0) return;
        arr[0] = arr[idx];
        idx--;
        int i = 0;
        while(true){
            int left = 2*i + 1;
            int right = 2*i + 2;
            if(left > idx) break;
            int largest = left;
            if(right <= idx && arr[right] > arr[left]) largest = right;
            if(arr[i] < arr[largest]){
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else break;
        }
    }

    int size(){
        return idx + 1;
    }

    void display(){
        if(idx < 0){
            cout<<"Heap empty\n";
            return;
        }
        for(int i=0;i<=idx;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }

};

int main(){
    MaxHeap pq;
    pq.push(50);
    pq.push(20);
    pq.push(10);
    pq.push(30);
    pq.push(40);
    pq.display();
    cout << pq.size() << endl;
    cout << pq.top() << endl;
    pq.push(5);
    pq.display();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    pq.pop();
    pq.display();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    return 0;
}