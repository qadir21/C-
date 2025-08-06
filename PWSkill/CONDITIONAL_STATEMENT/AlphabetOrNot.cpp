#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    /* if ((ch > 64 && ch < 91) || (ch > 96 && ch < 123))
    {
        cout << "The entered character " << ch << " is an alphabet." << endl;
    }
    else 
    {
        cout << "The entered character " << ch << " is not an alphabet." << endl;
    } */
    /* if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        cout << "The entered character " << ch << " is an alphabet." << endl;
    }
    else 
    {
        cout << "The entered character " << ch << " is not an alphabet." << endl;
    } */
    int ascci = (int) ch;
    if ((ascci >= 65 && ascci <= 90) || (ascci >= 97 && ascci <= 122))
    {
        cout << "The entered character " << ch << " is an alphabet." << endl;
    }
    else
    {
        cout << "The entered character " << ch << " is not an alphabet." << endl;
    }
    return 0;
}