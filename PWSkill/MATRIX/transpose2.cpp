#include<iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of column: ";
    cin >> column;
    int arr[row][column];
    cout << "Enter element of array..........................." << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Enter Element (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << "The eneter element are..........................." << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr[i][j] << endl;
        }
    }
    cout << "Transpose of matrix is............................" << endl;
    for(int i = 0; i < column; i++)
    {
        for(int j = 0; j < row; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr[j][i] << endl;
        }
    }
    return 0;
}