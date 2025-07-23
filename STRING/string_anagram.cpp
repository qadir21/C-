#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2) cout << "Anagram string." << endl;
    else cout << "Not an Anagram string." << endl; 
    return 0;
}