#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    /*for(int i=1; i<=rows; i++)
    {
        for(int j = 1; j<= 2 * i -1; j = j + 2)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }*/
    for(int i=1; i<=rows; i++)
    {
        int a = 1;
        for(int j = 1; j <= i; j++)
        {
            cout<< a <<" ";
            a += 2;
        }
        cout << endl;
    }
    return 0;
}