#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = rows - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << l << " ";
        }
        for (int l = i -1; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}