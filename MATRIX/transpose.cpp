#include<iostream>
using namespace std;
void input(int **, int, int, int = 0, int = 0);
void output(int **, int, int, int = 0, int = 0);
void transpose(int **, int **, int , int, int = 0, int = 0);
int main()
{
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of column: ";
    cin >> column;
    int **arr = new int*[row], **t = new int*[column];
    for(int i = 0; i < row; i++) arr[i] = new int[column];
    for(int i = 0; i < column; i++) t[i] = new int[row];
    cout << "Enter the element of array......................" << endl;
    input(arr, row, column);
    cout << "The enterd element are........................." << endl;
    output(arr, row, column);
    cout << "After Transpose..............................." << endl;
    transpose(arr, t, row, column);
    output(t, column, row);
    for(int i = 0; i < row; i++) 
    {
        delete[] arr[i];
    }
    for(int i = 0; i < column; i++) 
    {
        delete[] t[i];
    }
    delete[] arr;
    delete[] t;
    return 0;
}
void input(int **a, int r, int c, int i , int j)
{
    if(i == r) return;
    if(j == c) input(a, r, c, i + 1, 0);
    else
    {
        cout << "Enter Element (" << i << "," << j << ") : ";
        cin >> a[i][j];
        input(a, r, c, i, j + 1);
    }
}
void output(int **a, int r, int c, int i , int j)
{
    if(i == r) return;
    if(j == c) output(a, r, c, i + 1, 0);
    else
    {
        cout << "Element (" << i << "," << j << ") : " << a[i][j] << endl;
        output(a, r, c, i, j + 1);
    }
}
void transpose(int **ar, int **tr, int r, int c, int i ,int j)
{
    if(i == r) return;
    if(j == c) transpose(ar, tr, r, c, i + 1, 0);
    else 
    {
        tr[j][i] = ar[i][j];
        transpose(ar, tr, r, c, i, j + 1);
    }
}