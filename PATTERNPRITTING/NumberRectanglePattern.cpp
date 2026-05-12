#include<iostream>
using namespace std;
int main()
{
    int rows, column;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> column;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}