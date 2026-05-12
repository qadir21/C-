#include <iostream>
using namespace std;
void upper(string &, int);
int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    int l = str.length();
    upper(str, l - 1);
    cout << "Upper case string is: " << str << endl;
    return 0;
}
void upper(string &s, int i) 
{
    if (i < 0) return; 
    upper(s, i - 1); 
    if (s[i] >= 'a' && s[i] <= 'z') {
        s[i] -= 32; 
    }
}