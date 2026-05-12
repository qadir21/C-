#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int r1, r2, c1, c2;
    cout << "Enter row of first matrix: ";
    cin >> r1;
    cout << "Enter column of first matrix: ";
    cin >> c1;
    int arr1[r1][c1];
    cout << "Enter element of first matrix......................" << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cout << "Enter Element (" << i << "," << j << ") : ";
            cin >> arr1[i][j];
        }
    }
    cout << "Enter row of second matrix: ";
    cin >> r2;
    cout << "Enter column of second matrix: ";
    cin >> c2;
    int arr2[r2][c2], arr3[r1][c2];
    cout << "Enter element of second matrix......................" << endl;
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << "Enter Element (" << i << "," << j << ") : ";
            cin >> arr2[i][j];
        }
    }
    cout << "Enterd element of first matrix are..................." << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr1[i][j] << endl;
        }
    }
    cout << "Enterd element of second matrix are.................." << endl;
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr2[i][j] << endl;
        }
    }
    if(c1 != r2) 
    {
        cout << "Matrix multiplication is not possible............." << endl;
    }
    else
    {
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                arr3[i][j] = 0;
                for(int k = 0; k < c1; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }
    cout << "Resultant Matrix after multiplication:" << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr3[i][j] << endl;
        }
    }
    return 0;
}