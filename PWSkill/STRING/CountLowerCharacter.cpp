#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int count = 0, i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            count++;
        }
        i++;
    }
    cout << "The no of lower case character is: " << count << endl;
    return 0;
}