#include <iostream>
using namespace std;
void take_input(int [] = 0, int = 0, int  = 0);
bool Is_short(int [] = 0, int = 0);

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    take_input(arr, size);
    if (Is_short(arr, size))
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}
void take_input(int a[], int s, int i)
{
    if (i == s)
    {
        return;
    }
    cout << "Enter Element " << i + 1 << " : ";
    cin >> a[i];
    take_input(a, s, i + 1);
}
bool Is_short(int x[], int y)
{
    if (y == 0 || y == 1)
    {
        return true;
    }
    if (x[0] > x[1])
    {
        return false;
    }
    return Is_short(x + 1, y - 1);
}