#include<iostream> 
#include<unordered_map>
#include <utility>
using namespace std;

int main(){
    unordered_map<string, int> m;
    pair<string, int> p1 = {"Ranghv", 56};
    pair<string, int> p2;
    p2.first = "Ali";
    int n;
    cin >> n;
    p2.second = n;
    pair<string, int> p3 = {"jain", 23};
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    m["Harsh"] = 15;
    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    m.erase("Ali");
    return 0;
}