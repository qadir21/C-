#include<iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int nst = 1, nsp = row - 1;
    for (int i = 1; i <= (2 * row) - 1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        if (i <= row-1) nsp--;
        else nsp++;
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        if (i <= row-1) nst +=2;
        else nst -= 2;
        cout << endl;
    }
    return 0;
}