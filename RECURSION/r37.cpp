#include <iostream>
#include <vector>
using namespace std;
void generateSubsequences(string str, int index, string current, vector<string>& result) 
{
    if (index == str.length()) 
    {
        result.push_back(current);
        return;
    }
    generateSubsequences(str, index + 1, current, result);
    generateSubsequences(str, index + 1, current + str[index], result);
}
void printSubsequences(const vector<string>& result, int i = 0) 
{
    if (i == result.size()) return;
    cout << "\"" << result[i] << "\"";
    if (i < result.size() - 1) cout << ", ";
    printSubsequences(result, i + 1);
}
int main() 
{
    string input;
    vector<string> subsequences;
    cout << "Enter a string: ";
    cin >> input;
    generateSubsequences(input, 0, "", subsequences);
    cout << "Subsequences: ";
    printSubsequences(subsequences);
    cout << endl;
    return 0;
}