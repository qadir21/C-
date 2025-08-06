#include<iostream>
using namespace std;
int main()
{
    int rows, column;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of column: ";
    cin >> column;
    int matrix[rows][column];
    cout << "Enter the element of matrix....................." << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Enter element (" << i << ", " << j << ") : "; 
            cin >> matrix[i][j];
        }
    }
    cout << "------------------------------------------------" << endl;
    cout << "The enterd element of matrix...................." << endl;
    for(int k = 0; k < rows; k++)
    {
        for(int l = 0; l < column; l++)
        {
            cout << "Element (" << k << ", " << l << ") : " << matrix[k][l] << endl;
        }
    }
    return 0;
}