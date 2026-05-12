#include<iostream>
using namespace std;
string Sort(string &s)
{
    string temp;
    int l = s.length();
    for(int j = 0; j < l - 1; j++)
    {
        for(int k = j + 1; k < l; k++)
        {
            if(s[j] > s[k])
            {
                char c;
                c = s[j];
                s[j] = s[k];
                s[k] = c;
            }
        }
    }
    return s;
}
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    Sort(str);
    cout << str << endl;
    return 0;
}