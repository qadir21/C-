#include<iostream>
using namespace std;
int main()
{
    int rows, column;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> column;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}