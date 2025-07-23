#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    if (rows % 2 != 0)
    { 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == j || j == rows + 1 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    }
    else
    {
        cout << "Error: Invalid number of rows" << endl;
    }
    return 0;
}