#include<iostream>
using namespace std;
void input(int **, int, int, int = 0, int = 0);
void output(int **, int, int, int = 0, int = 0);
int sum(int **, int, int , int = 0, int = 0);
int main()
{
    int row, column;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of column: ";
    cin >> column;
    cout << "Enter Element..................." << endl;
    int **arr = new int*[row];
    for(int i = 0; i < row; i++) arr[i] = new int[column];
    input(arr, row, column);
    cout << "The enterd element are.........." << endl;
    output(arr, row, column);
    cout << "The sum of all the elemnt: " << sum(arr, row, column) << endl;
    for (int i = 0; i < row; i++) delete[] arr[i];
    delete[] arr;
    return 0;
}
void input(int **a, int r, int c, int i, int j)
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
void output(int **ar, int r, int c, int i, int j)
{
    if(i == r) return;
    if(j == c) output(ar, r, c, i + 1, 0);
    else
    {
        cout << "Element (" << i << "," << j << ") : " << ar[i][j] << endl;
        output(ar, r, c, i, j + 1);
    }
}
int sum(int **arr, int r, int c, int i, int j) 
{
    if (i == r) return 0;  
    if (j == c) return sum(arr, r, c, i + 1, 0);  
    return arr[i][j] + sum(arr, r, c, i, j + 1);  
}