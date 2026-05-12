#include<iostream>
using namespace std;
bool isPalindrome(string, int, int);
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    bool flag;
    flag = isPalindrome(str, 0, str.length() - 1);
    if(flag == true) cout << str << " is Palindrome " << endl;
    else cout << str << " is not palindrome " << endl; 
    return 0;
}
bool isPalindrome(string s, int i, int j)
{
    if (i > j) return true;
    if(s[i] != s[j]) return false;
    else return isPalindrome(s, i + 1, j - 1);
}