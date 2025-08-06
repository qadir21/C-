#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << str.substr(4) << endl;
    return 0;
}