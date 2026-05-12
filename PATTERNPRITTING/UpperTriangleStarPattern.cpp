#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    /*for(int i = rows; i >= 1; i--)
    {
        for(int j=1; j<=i; j++) // --> method 1
        {
            cout<< "* ";
        }
        cout<<endl;
    }*/
    // Number Of stars = n + 1 -i
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows + 1 - i; j++)
        {
            cout << "* "; // --> method 2
        }
        cout << endl;
    }
    return 0;
}