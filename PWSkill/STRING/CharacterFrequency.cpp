#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    unordered_map<char, int> freq;
    char max_char;
    int max_count = 0;
    for(char c : s) freq[c]++;
    for(auto it : freq)
    {
        if(it.second > max_count)
        {
            max_count = it.second;
            max_char = it.first;
        }
    }
    cout << "The character with maximum frequency: " << max_char << " (Frequency: " << max_count << ")" << endl;
    return 0;
}