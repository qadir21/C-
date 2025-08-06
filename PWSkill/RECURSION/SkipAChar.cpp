/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s, str = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != 'a') str += s[i];
    }
    cout << str << endl;
    return 0;
}*/
//Enter a string: abdul Qadir
//bdul Qdir
/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s, str = "";
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != 'a') str.push_back(s[i]);
    }
    cout << str << endl;
    return 0;
}*/
//Enter a string: abdul qadir
//bdul qdir
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string SkipACharacter(string); 
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    string str = SkipACharacter(s);
    cout << str << endl;
    return 0;
}
string SkipACharacter(string str)
{
    if(str.length() == 0) return "";
    char ch = str[0];
    string temp = SkipACharacter(str.substr(1));
    if(ch == 'a') return temp;
    else return ch + temp;
}