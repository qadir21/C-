#include <iostream>
#include <cstring>
using namespace std;
void replace(char c[]);
int main()
{
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100); // Reads the full line, including spaces
    replace(input);
    cout << "Modified string: " << input << endl;
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
        // Shift characters to the right to make space for "ram"
        for (int i = l; i >= 0; i--)
        {
            c[i + 2] = c[i];
        }

        // Insert "ram" at the current position
        c[0] = 'r';
        c[1] = 'a';
        c[2] = 'm';

        // Move 3 positions ahead to continue checking the rest of the string
        replace(c + 3);
    }
    else
    {
        replace(c + 1);
    }
}