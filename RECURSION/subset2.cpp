#include<iostream>
#include<string>
using namespace std;
string str; // Global string
void printSubset(string ans, int index)
{
    if(index == str.length())
    {
        cout << ans << endl;
        return;
    }
    printSubset(ans + str[index], index + 1);
    printSubset(ans, index + 1);
}
int main()
{
    cout << "Enter string: ";
    getline(cin, str);
    printSubset("", 0);
    return 0;
}