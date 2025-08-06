#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int nst = 1;
    int nsp = rows - 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= nsp; j++)
            cout << "  ";
        for (int k = 1; k <= nst; k++)
            cout << "* ";
        cout << endl;
        nsp--;
        nst += 2;
    }
    return 0;
}