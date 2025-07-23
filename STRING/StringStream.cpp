#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    string s;
    cout << "Enter String: ";
    getline(cin, s);
    stringstream ss(s);
    string temp;
    while(ss >> temp)
    {
        cout << temp << endl;
    }
    return 0;
}