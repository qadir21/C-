#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 1; i <= 2 * rows -1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int m = rows - 1;
    int nsp = 1;
    for (int i = 1; i <= m; i++)
    {
        int a = 1;
        for (int k = 1; k <= m + 1 - i; k++)
        {
            cout << a << " ";
            a++;
        }
        for (int l = 1; l <= nsp; l++)
        {
            cout << "  ";
            a++;
        }
        nsp += 2;
        for (int k = 1; k <= m + 1 - i; k++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}