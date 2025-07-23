#include<iostream> 
using namespace std;
void reverse(string &, int, int);
int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    int len = str.length();
    reverse(str, len - 1, 0);
    cout << "The reverse string is: " << str << endl;
    return 0;
}
void reverse(string &s, int l, int i)
{
    if(i > l ) return;
    char temp;
    temp = s[i];
    s[i] = s[l];
    s[l] = temp;
    reverse(s, l - 1, i + 1);
}