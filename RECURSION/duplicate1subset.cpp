#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans, string original, vector<string>& v, int index)
{
    if(index == original.length())
    {
        v.push_back(ans);
        return;
    }
    // Include current character
    storeSubset(ans + original[index], original, v, index + 1);

    // Skip all same consecutive characters for exclude path
    int nextIndex = index + 1;
    while(nextIndex < original.length() && original[nextIndex] == original[index])
        nextIndex++;

    storeSubset(ans, original, v, nextIndex);
}
int main()
{
    string str;
    vector<string> v;
    cout << "Enter string: ";
    getline(cin, str);
    storeSubset("", str, v, 0);
    for(const auto& s : v)
        cout << (s.empty() ? "\"\"" : s) << endl;
    return 0;
}