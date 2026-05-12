#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    int l = str.length();
    reverse(str.begin(), str.begin() + l / 2);
    cout << str << endl;
    return 0;
}