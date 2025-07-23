#include<iostream>
#include<string>
#include<vector>
using namespace std;
void generate(string, int, int, int);
int main()
{
    int n;
    cout << "Enter paranthesis: ";
    cin >> n;

    generate("", 0, 0, n);
    return 0;
}

void generate(string s, int open , int close, int n)
{
    if(close == n) 
    {
        cout << s << endl;
        return;
    }

    if(open < n) generate(s + '(', open + 1, close, n);
    if(close< open) generate(s + ')', open, close + 1, n);
}