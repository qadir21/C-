#include<iostream>
using namespace std;
string Substring(string & s)
{
    int l = s.length();
    string temp(l/2,' ');
    int i , j = 0;
    if(l % 2 == 0) i = l / 2;
    i = (l / 2)  + 1;
    while(i < l)
    {
        temp[j] = s[i];
        i++, j++;
    }
    return temp;
}
int main()
{
    string str, str1;
    cout << "Enter string: ";
    getline(cin, str);
    int index, l;
    str1 = Substring(str);
    cout << str1 << endl;
    return 0;
}