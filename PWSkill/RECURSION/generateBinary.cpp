#include<iostream>
using namespace std;
void generate(string);
int n;
int main()
{
    cout << "Enter length: ";
    cin >> n;
    generate("");
    return 0; 
}
void generate(string s)
{
    if(s.length() == n)
    {
        cout << s << endl; 
        return;
    }
    generate(s + "0");
    generate(s + "1");
}