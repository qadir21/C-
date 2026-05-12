#include <iostream>
using namespace std;
void inputArray(int arr[][100], int rows, int cols, int i = 0, int j = 0) 
{
    if (i == rows) return;
    if (j == cols) inputArray(arr, rows, cols, i + 1, 0);
    else 
    {
        cout << "Enter Element (" << i << "," << j << ") : ";
        cin >> arr[i][j];
        inputArray(arr, rows, cols, i, j + 1);
    }
}
void printArray(int arr[][100], int rows, int cols, int i = 0, int j = 0) 
{
    if (i == rows) return;
    if (j == cols) printArray(arr, rows, cols, i + 1, 0);
    else 
    {
        cout << "Element (" << i << "," << j << ") : " << arr[i][j] << endl;
        printArray(arr, rows, cols, i, j + 1);
    }
}
int sumArray(int arr[][100], int rows, int cols, int i = 0, int j = 0) 
{
    if (i == rows) return 0;
    if (j == cols) return sumArray(arr, rows, cols, i + 1, 0);
    return arr[i][j] + sumArray(arr, rows, cols, i, j + 1);
}
int main() 
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int arr[100][100]; 
    cout << "Enter The Elements................." << endl;
    inputArray(arr, rows, cols);
    cout << "The Entered Elements Are............" << endl;
    printArray(arr, rows, cols);
    cout << "The sum of all the elements is: " << sumArray(arr, rows, cols) << endl;
}