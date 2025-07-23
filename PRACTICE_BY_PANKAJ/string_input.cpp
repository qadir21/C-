#include<iostream>
using namespace std;
int main()
{
    string s;
    // cin >> s; // problem is similar to scanf
    getline(cin, s); // string ko array ki tarah bhi use kar sakte hai.
    cout << s << endl;
    cout << s[0] << endl;
    s[1] = 'u';
    cout << s << endl;
    return 0;
}