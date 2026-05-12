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
    cout << "Enter Elements............................." << endl;
    for(int i = 0; i < row; i++) 
    {
        for(int j = 0; j < column; j++) 
        {
            cout << "Enter Element (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << "Entered Elements.........................." << endl;
    for(int i = 0; i < row; i++) 
    {
        for(int j = 0; j < column; j++) 
        {
            cout << "Element (" << i << "," << j << ") : " << arr[i][j] << endl;
        }
    }
    int minr = 0, minc = 0, maxr = row - 1, maxc = column - 1;
    cout << "Spiral Order: ";
    while(minr <= maxr && minc <= maxc)
    {
        for(int j = minc; j <= maxc; j++)
            cout << arr[minr][j] << " ";
        minr++;
        for(int i = minr; i <= maxr; i++)
            cout << arr[i][maxc] << " ";
        maxc--;
        if(minr <= maxr) 
        {
            for(int j = maxc; j >= minc; j--)
                cout << arr[maxr][j] << " "; 
            maxr--;
        }
        if(minc <= maxc) 
        {
            for(int i = maxr; i >= minr; i--)
                cout << arr[i][minc] << " ";
            minc++;
        }
    }
    
    cout << endl;
    return 0;
}