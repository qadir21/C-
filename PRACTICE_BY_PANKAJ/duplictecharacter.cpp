#include<iostream>
#include<cstring> 
using namespace std;
void replace(char []);
int main()
{
    char input[100];
    cout << "enter a string: ";
    cin >> input;
    replace(input);
    cout << input << endl;
    return 0;
}
void replace(char x[])
{
    int l = strlen(x);
    if (l == 0 || l == 1)
    {
        return;
    }
    else if (x[0] == x[1])
    {
        for (int i = 1; i <= l; i++)
        {
            x[i- 1] = x[i];
        }
        replace(x);
    }
    else
    {
    replace (x + 1);
    }
}