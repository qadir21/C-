#include<iostream>
#include<string>
using namespace std;
void permutation(vector<string> &, string, string);
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    vector<string> v;
    permutation(v,"", str);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
void permutation(vector<string> &v, string ans, string original)
{
    if(original == "")
    {
        v.push_back(ans);
        return;
    }
    for(int i = 0; i < original.length(); i++)
    {
        char ch = original[i];
        string left = original.substr(0, i);
        string right = original.substr(i + 1);
        permutation(v, ans + ch, left + right);
    }
}