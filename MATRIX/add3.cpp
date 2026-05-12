#include<iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of column: ";
    cin >> column;
    int arr1[row][column], arr2[row][column];
    cout << "Enter Element of first array........................." << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Enter Element (" << i << "," << j << ") : ";
            cin >> arr1[i][j];
        }
    }
    cout << "Enter Element of Second array........................." << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Enter Element (" << i << "," << j << ") : ";
            cin >> arr2[i][j];
        }
    }
    cout << "The Enterd Element of first array are.............." << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr1[i][j] << endl;
        }
    }
    cout << "The Enterd Element of Second array are.............." << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr2[i][j] << endl;
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            arr1[i][j] += arr2[i][j];
        }
    }
    cout << "Sum of both  array are...................." << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr1[i][j] << endl;
        }
    }
    return 0;
}
