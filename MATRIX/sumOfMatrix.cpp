#include<iostream> 
#include<climits>
using namespace std;
int main()
{
    int rows,column, sum = 0;
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
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "The sum of all the element is: " << sum << endl;
}