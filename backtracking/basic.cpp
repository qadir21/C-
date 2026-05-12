#include<iostream>
#include<string>
using namespace std;

void permutations(string input, string output){
    if(!input.size()) {
        cout << output << "\n";
        return;
    }
    for(int i = 0; i < input.size(); i++){
        char ch = input[i];
        string left = input.substr(0, i);
        string right = input.substr(i + 1);
        string ros = left + right;
        permutations(ros, output + ch);
    }
}

int main(){
    string str;
    getline(cin, str);
    permutations(str, "");
}