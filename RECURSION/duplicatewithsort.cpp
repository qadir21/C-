#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void storeSubset(string ans, string original, vector<string>& v, bool flag) 
{
    if(original.empty()) 
    {
        v.push_back(ans);
        return;
    }

    char ch = original[0];

    if(original.length() == 1) 
    {
        if(flag) storeSubset(ans + ch, original.substr(1), v, true);
        storeSubset(ans, original.substr(1), v, true); // ✅ always call this
        return;
    }

    char dh = original[1];

    if(ch == dh) 
    {
        if(flag) storeSubset(ans + ch, original.substr(1), v, true);
        storeSubset(ans, original.substr(1), v, false);
    } 
    else 
    {
        if(flag) storeSubset(ans + ch, original.substr(1), v, true);
        storeSubset(ans, original.substr(1), v, true);
    }
}
int main() {
    string str;
    vector<string> v;
    cout << "Enter string: ";
    getline(cin, str);
    sort(str.begin(), str.end());
    storeSubset("", str, v, true);
    sort(v.begin(), v.end());
    for(const auto& s : v) {
        cout << (s.empty() ? "\"\"" : s) << endl; // show empty subset
    }
    return 0;
}