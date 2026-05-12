#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void removeACharacter(string ans, string original)
{
    if(original.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = original[0];
    if(ch == 'a') removeACharacter(ans, original.substr(1));
    else removeACharacter(ans + ch,original.substr(1));
}
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    removeACharacter("", str);
    return 0;
}