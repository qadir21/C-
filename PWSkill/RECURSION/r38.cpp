#include <iostream>
#include <vector>
using namespace std;
void generateParentheses(int open, int close, string current, vector<string>& result) {
    if (open == 0 && close == 0) 
    {
        result.push_back(current);
        return;
    }
    if (open > 0) 
    {
        generateParentheses(open - 1, close, current + "(", result);
    }
    if (close > open) 
    {
        generateParentheses(open, close - 1, current + ")", result);
    }
}
void printParentheses(const vector<string>& result, int i = 0) 
{
    if (i == result.size()) return;

    cout << "\"" << result[i] << "\"";
    if (i < result.size() - 1) cout << ", ";
    printParentheses(result, i + 1);
}
int main() {
    int n;
    vector<string> parentheses;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;
    generateParentheses(n, n, "", parentheses);
    cout << "Valid parentheses combinations: ";
    printParentheses(parentheses);
    cout << endl;
    return 0;
}