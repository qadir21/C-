#include<iostream> 
#include<climits>
using namespace std;
int main()
{
    int rows,column;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of column: ";
    cin >> column;
    int arr[rows][column];
    cout << "Enter The Element................." << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Enter Element (" << i << "," << j << ") : "; 
            cin >> arr[i][j];
        }
    }
    cout << "The Enterd Element Are............" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << "Element (" << i << "," <<  j << ") : " << arr[i][j] << endl;
        }
    }
    int max = INT_MIN, a, b;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(arr[i][j] > max) max = arr[i][j] , a = i, b = j;
        }
    }
    cout << "The Maximum element in the array is: " << max <<  " and the index is: (" << a << "," << b << ")" << endl;
    return 0;
}