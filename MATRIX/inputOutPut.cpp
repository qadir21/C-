#include<iostream>
using namespace std;
void input(int row, int col, int **arr);
void printArray(int row, int col, int **arr);
int main()
{
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;
    int **arr = new int*[row];
    for(int i = 0; i < row; i++) 
    {
        arr[i] = new int[column];
    }
    input(row, column, arr);
    printArray(row, column, arr);
    for(int i = 0; i < row; i++) 
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
void input(int row, int col, int **arr)
{
    for(int i = 0; i < row; i++) 
    {
        for(int j = 0; j < col; j++) 
        {
            cout << "Enter Element (" << i << "," << j << "): ";
            cin >> arr[i][j];
        }
    }
}
void printArray(int row, int col, int **arr)
{
    cout << "The 2D array is:" << endl;
    for(int i = 0; i < row; i++) 
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}