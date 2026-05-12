#include<iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int count = 0, i = 0;
    while(s[i] != '\0')
    {
        while (s[i] == ' ') i++;
        if (s[i] != '\0') count++; 
        while (s[i] != ' ' && s[i] != '\0') i++;
    }
    cout << "The Number of Words in the string: " << count << endl;
    return 0;
}