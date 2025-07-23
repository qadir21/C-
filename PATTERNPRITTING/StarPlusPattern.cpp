#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    if (rows % 2 != 0)
    {
    int mid = (rows /2) + 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == mid || j == mid)
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
        cout << "Error: Number of rows must be odd." << endl;
    }
    return 0;
}