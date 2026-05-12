#include<iostream>
#include<sstream>
#include<set>
using namespace std;

vector<int> takeInput() {
    vector<int> v;
    string line;
    getline(cin, line); // enter tak input
    istringstream iss(line);
    int x;
    while (iss >> x) v.push_back(x);
    return v;
}

void display(vector<int> v){
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}

int main(){
    vector<int> v = takeInput();
    display(v);
    set<int> s;
    for(int i = 0; i < v.size(); i++){
        s.insert(v[i]);
    }
    for(auto x : s){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}