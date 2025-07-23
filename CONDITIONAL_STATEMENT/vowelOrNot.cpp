#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') || (ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        {
            cout << ch << " is a vowel." << endl;
        }
        else
        {
            cout << ch << " is not a vowel." << endl;
        }
    }
    else
    {
        cout << ch << " is not a letter." << endl;
    }
    return 0;
}