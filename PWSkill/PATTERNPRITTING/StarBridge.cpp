#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 0; i < 2 * rows -1; i++)
    {
        cout << "* ";
    }
    cout << endl;
    int m = rows - 1;
    int nsp = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int k = 1; k <= m + 1 - i; k++)
        {
            cout << "* ";
        }
        for (int l = 1; l <= nsp; l++)
        {
            cout << "  ";
        }
        nsp += 2;
        for (int k = 1; k <= m + 1 - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}