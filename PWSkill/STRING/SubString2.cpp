#include<iostream>
using namespace std;
string Substring(string & s, int i)
{
    int l = s.length();
    string temp(l - i, ' ');
    int j = 0;
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
    int index;
    cout << "Enter index where you want string: ";
    cin >> index;
    str1 = Substring(str, index);
    cout << str1 << endl;
    return 0;
}