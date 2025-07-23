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
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Enter elemnt (" << i  << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << "Enterd Element are.............................." << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr[i][j] << endl;
        }
    }
    return 0;
}