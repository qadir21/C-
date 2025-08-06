#include<iostream>
using namespace std;
string Substring(string & s, int i)
{
    int l = s.length();
    string temp;
    while(i < l)
    {
        temp.push_back(s[i]);
        i++;
    }
    return temp;
}
int main()
{
    string str, str1;
    cout << "Enter string: ";
    getline(cin, str);
    str1 = Substring(str, 2);
    cout << str1 << endl;
    return 0;
}