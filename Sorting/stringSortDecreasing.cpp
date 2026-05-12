#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string s = "";
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'x') s.push_back(str[i]);
    }
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    for(char ch : s) cout << ch << " ";
    return 0;
}