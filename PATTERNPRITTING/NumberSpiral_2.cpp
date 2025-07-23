#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    // 1 1 1 1 
    // 1 2 2 2 
    // 1 2 3 3 
    //1 2 3 4
    for (int i = 1; i <= 2 * rows -1; i++)
    {
        for (int j = 1; j <= 2 * rows -1; j++)
        {
            int a = i;
            int b = j;
            if (a > rows) a = 2 * rows - i;
            if (b > rows) b = 2 * rows - j;
            int x = min(a, b);
            cout << rows - x + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}