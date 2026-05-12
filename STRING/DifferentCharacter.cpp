#include<iostream>
using namespace std;
int DifferentNeighboutCharacter(string s)
{
    int l = s.length(), count = 0, i = 1;
    while(i < l - 1)
    {
        if(s[i - 1] !=  s[i] && s[i] != s[i + 1])
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << DifferentNeighboutCharacter(str) << endl;;
    return 0;
}