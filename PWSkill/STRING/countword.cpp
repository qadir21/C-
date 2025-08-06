#include<iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int count = 0, i = 0;
    bool inWord = false; 
    while (s[i] != '\0')
    {
        if (s[i] != ' ') 
        {
            if (!inWord) count++; 
            inWord = true; 
        }
        else inWord = false; 
        
        i++;
    }
    cout << "The Number of Words in the string: " << count << endl;
    return 0;
}