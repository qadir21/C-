#include<iostream> 
using namespace std;
int main()
{
    int size;
    cout << "Enter number of rows/ column of matrix: ";
    cin >> size;
    int arr[size][size];
    cout << "Enter element of array........................." << endl;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << "Enter element (" << i << "," << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << "The Enterd Element are........................." << endl;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr[i][j] << endl;
        }
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout << "Matrix after transpose......................." << endl;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << "Element (" << i << "," << j << ") : " << arr[i][j] << endl;
        }
    }
    return 0;
}