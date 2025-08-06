#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    string word = "";
    vector<string> s;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ') word += str[i];
        else if(str[i] == ' ') s.push_back(word) , word = "";
    }
    s.push_back(word);
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    string s1;
    sort(s.begin(), s.end());
    cout << endl;
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}