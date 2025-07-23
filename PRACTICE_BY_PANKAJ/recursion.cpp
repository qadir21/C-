#include <iostream>
using namespace std;
void input(int[] = 0, int = 0, int = 0);
int find_sum(int [], int); 
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    input(arr, size);
    cout << "Sum of array: " << find_sum(arr, size) << endl;
    return 0;
}
int find_sum(int x[], int y)
{
    if (y == 0)
    {
        return 0;
    }
    return x[0] + find_sum(x + 1, y - 1);
}

void input(int a[], int b, int index)
{
    if (index == b)
    {
        return;
    }
    cout << "Enter Element " << index + 1 << " : ";
    cin >> a[index];
    input(a, b, index + 1);
}