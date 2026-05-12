#include<iostream>
#include<string>
using namespace std; 
void replace(char []);
int main()
{ 
    char input[100];
    cout << "Enter a string :";
    cin >> input;
    replace (input);
    cout << input << endl;
    return 0;
}
void replace(char c[])
{
    int l = strlen(c);
    if (l == 0)
    {
        return;
    }
    if (c[0] == 'x')
    {
        for (int i = 0; i <= l; i++)
        {
            c[i] = c[i + 1];
        }
        replace(c);
    }
    else 
    {
        replace(c + 1);
    }
}