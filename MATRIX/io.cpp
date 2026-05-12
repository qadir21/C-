#include<iostream>
using namespace std;
void input(int , int, int **, int = 0 , int = 0);
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
    for(int i = 0; i < row; i++) 
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
void input(int row, int col, int **arr, int i, int j)
{
    if (i >= row)
    {
        return;
    }
    if (j >= col) 
    {
        input(row, col, arr, i + 1, 0);
        return;
    }
    cout << "Enter Element (" << i << "," << j << "): ";
    cin >> arr[i][j];
    input(row, col, arr, i, j + 1);
}