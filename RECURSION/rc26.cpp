#include<iostream>
using namespace std;
void lower(string&, int);
int count_vowel(string, int);
int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    int l = str.length();
    lower(str, l - 1);
    cout << "The vowel in the string: " << count_vowel(str, l - 1) << endl;
    return 0;
}
void lower(string &s, int i)
{
    if(i < 0) return;
    lower(s, i - 1);
    if(s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] += 32;
    }
}
int count_vowel(string s, int i)
{
    if(i < 0) return 0;
    if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u') 
    {
        return 1 + count_vowel(s, i - 1);
    }
    return count_vowel(s, i - 1);
}