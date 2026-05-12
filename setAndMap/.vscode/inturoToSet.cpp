#include<iostream> 
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3); 
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    // for each loop
    for(int x : s) cout << x << " ";
    cout << endl << s.size() << endl;
    s.erase(2);
    for(int x : s) cout << x << " "; 
    cout << endl;
    if(s.find(40) != s.end()) cout << "exists" << endl;
    else cout << "Not exists" << endl;
    return 0;
}