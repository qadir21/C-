#include<iostream>
using namespace std;
bool isPalindrome(string);
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    bool flag;
    flag = isPalindrome(str);
    if(flag == true) cout << str << " is Palindrome " << endl;
    else cout << str << " is not palindrome " << endl; 
    return 0;
}
bool isPalindrome(string s)
{
    int i = 0, j = s.length() - 1;
    while(i < j)
    {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}