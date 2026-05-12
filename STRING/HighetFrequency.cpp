#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);  
    vector<int> arr(26, 0);  
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z')  
        {
            arr[ch - 'a']++;
        }
    }
    int max_freq = 0;
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] > max_freq)
        {
            max_freq = arr[i];
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] == max_freq && arr[i] > 0)
        {
            char ch = (char)(i + 'a');
            cout << ch << " " << max_freq << endl;
        }
    }
    return 0;
}