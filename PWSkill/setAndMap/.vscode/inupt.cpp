#include<iostream>
#include<sstream>
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