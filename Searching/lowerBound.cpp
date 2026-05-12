#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int x = 12;
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] > x)
        {
            cout << arr[i - 1] << endl;
            break;
        }
    }
    return 0;
}