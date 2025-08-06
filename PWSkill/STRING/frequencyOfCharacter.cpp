#include<iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int max_count = 0, count;
    char a;
    for(int i = 0; s[i] != '\0'; i++)
    {
        count = 0;
        for(int j = i; s[j]; j++)
        {
            if(s[i] == s[j]) count++;
            if(count > max_count)  max_count = count, a = s[i];
        }
    }
    cout << "The character has maximum frequency " << a <<  " Frequency is " << max_count << endl;
    return 0;
}