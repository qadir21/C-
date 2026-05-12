#include<iostream>
using namespace std;
void generate(string, int);
int main()
{
    int num;
    cout << "Enter length: ";
    cin >> num;
    generate("", num);
    return 0; 
}
void generate(string s, int n)
{
    if(n == 0)
    {
        cout << s << endl; 
        return;
    }
    generate(s + "0", n - 1);
    generate(s + "1", n - 1);
}