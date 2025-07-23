#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    /*for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < rows - i ; j++)
        {
            cout << "  ";  //Method 1
        }
        for (int k = 1; k <= (2 * i) -1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/
    /*int nst = 1;
    int nsp = rows - 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        cout << endl;
        if (i < rows)
        {
            nsp--;
            nst += 2;
        } // method 2
        else
        {
            nsp++;
            nst -= 2;
        }
    }*/
    int nst = 1;
    int nsp = rows-1;
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";  // method 3
        }
        nsp--;
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        nst += 2;
        cout << endl;
    }
    return 0;
}