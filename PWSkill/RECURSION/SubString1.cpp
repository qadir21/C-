#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void printSubset(string ans, string original)
{
    if(original == "")
    {
        cout << ans << endl;
        return;
    }
    char ch = original[0];
    printSubset(ans, original.substr(1));
    printSubset(ans + ch, original.substr(1));
}
    
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    printSubset("", str);
    return 0;
}