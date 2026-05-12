#include<iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}