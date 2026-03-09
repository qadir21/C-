#include<iostream>
#include<queue>
#include<fstream>
using namespace std;

void takeInput(queue<int>& q){
    int x;
    while(cin >> x){   // jab tak input milta rahe
        q.push(x);
    }
}

void removeAtEvenIndex(queue<int>& q){
    int n = q.size();
    for(int i = 0; i < n; i++){
        if((i % 2)) q.pop();
        else{ 
            q.push(q.front());
            q.pop();
        }
    }
}

void display(queue<int>& q){
    int n = q.size();
    for(int i = 0; i < n; i++){
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}

int main(){
    queue<int> q;
    takeInput(q);
    display(q);
    removeAtEvenIndex(q);
    display(q);
    return 0;
}