#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int k = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}