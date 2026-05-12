#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    /*for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (2 * i) -1; j++) // Method 1
        {
            cout << " * ";
        }
        cout << endl;
    }*/
    for (int i = 1; i <= rows; i++)
    {
        int a = (2 * i) - 1;
        for (int j = 1; j <= a; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}