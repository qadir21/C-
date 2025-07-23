#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;
    cout << "Original Array: ";
    for(int i=0; i<6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}