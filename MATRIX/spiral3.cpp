#include<iostream> 
using namespace std;
int main()
{
    int row, column;
    cout << "Enter row: ";
    cin >> row;
    cout << "Enter column: ";
    cin >> column;
    int arr[row][column];
    cout << "Enter Elment............................." << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Enter Element (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr[i][j] << endl;
        }
    }
    //Spiral
    int minr = 0, minc = 0, maxr = row - 1, maxc = column - 1, tne = row * column, count = 0;
    while(minr <= maxr && minc <= maxc)
    {
        // Right
        for(int j = minc; j <= maxc && count < tne; j++)
        {
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;
        //Down 
        for(int i = minr; i <= maxr && count < tne; i++)
        {
            cout << arr[i][maxc] << " ";
            count++;
        }
        maxc--;
        // Left
        for(int j = maxc; j >= minc && count < tne; j--)
        {
            cout << arr[maxr][j] << " ";
            count++;
        }
        maxr--;
        //up
        for(int i = maxr; i >= minr && count < tne; i--)
        {
            cout << arr[i][minc] << " ";
            count++;
        }
        minc++;
    }
    cout << endl;
    return 0;
}