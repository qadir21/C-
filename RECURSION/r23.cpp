#include<iostream>
#include<string.h>
using namespace std;
int palindrome(char*, int, int);
int main()
{
    char str[15];
    cout << "Enter string: ";
    cin >> str;
    int l = strlen(str);
    if(palindrome(str, 0, l - 1))
    {
        cout << "Enterd string is palindrome..." << endl;
    }
    else
    {
        cout << "Enterd string is not palindrome..." << endl;
    }
    return 0;
}
int palindrome(char * s, int start, int end)
{
    if(start >= end) return 1;
    else if(s[start] != s[end]) return 0;
    return palindrome(s, start + 1, end - 1);
}
