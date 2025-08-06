#include<iostream>
using namespace std;
string Substring(string & s, int i, int l1)
{
    int l = s.length();
    string temp(l1, ' ');
    int j = i  + l1, k = 0;
    while(i <= j)
    {
        temp[k] = s[i];
        i++, k++;
    }
    return temp;
}
int main()
{
    string str, str1;
    cout << "Enter string: ";
    getline(cin, str);
    int index, l;
    cout << "Enter index where you want to start: ";
    cin >> index;
    cout << "Enter length of substring: ";
    cin >> l;
    str1 = Substring(str, index, l);
    cout << str1 << endl;
    return 0;
}