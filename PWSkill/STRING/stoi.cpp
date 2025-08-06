#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "Enter number: ";
    getline(cin, s);
    int x = stoi(s);
    cout << x << endl;
    return 0;
}