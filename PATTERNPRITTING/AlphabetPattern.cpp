#include<iostream>
using namespace std;
int main()
{
    int rows, column;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> column;
    for (int i = 0; i < rows; i++)
    {
        char a = 'A';
        {
            for (int j = 0; j < column; j++)
            {
                cout << a << " ";
                a++;
            }
            cout << endl;
        }
    }
    return 0;
}