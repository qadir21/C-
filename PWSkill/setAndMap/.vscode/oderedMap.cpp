#include<iostream>
#include<sstream>
#include<vector>
#include<map>
using namespace std;

vector<pair<string,int>> takeInput() {
    vector<pair<string,int>> v;
    string line;
    while(getline(cin, line)){
        if(line.empty()) break; // optional stop 
        istringstream iss(line);
        string name;
        int age;
        iss >> name >> age; // ek line → ek pair
        v.push_back({name, age});
    }
    return v;
}

void display(vector<pair<string,int>> v){
    for(auto p : v){
        cout << p.first << " " << p.second << endl;
    } 
}

int main(){
    vector<pair<string,int>> v = takeInput();
    map<string, int> m;
    // print
    display(v);
    cout << endl;
    for(auto x : v){
        m[x.first] = x.second;
    }
    for(auto e : m){
        cout << e.first << " " << e.second << endl;
    }
    return 0;
}