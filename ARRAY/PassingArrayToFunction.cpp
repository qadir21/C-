/*#include<iostream>
using namespace std;
void swap(int arr[]);
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << "Original Array: " << endl;
    for(int i=0; i<6; i++)
    {
        cout<< i + 1 << " element in the array: ";
        cout << arr[i] << endl;
    }
    swap(arr);
    cout << "After swapping: " << endl;
    for(int i=0; i<6; i++)
    {
        cout<< i + 1 << " element in the array: ";
        cout << arr[i] << endl;
    }
    return 0;
}
void swap(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[5];
    arr[5] = temp;
    return; // To prevent the function from returning any value. This is optional.
}*/
/*Original Array:
1 element in the array: 1
2 element in the array: 2
3 element in the array: 3
4 element in the array: 4
5 element in the array: 5
6 element in the array: 6
After swapping:
1 element in the array: 6
2 element in the array: 2
3 element in the array: 3
4 element in the array: 4
5 element in the array: 5
6 element in the array: 1*/
/*#include <iostream>
using namespace std;
void swap(int *arr);
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << "Original Array: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " element in the array: ";
        cout << arr[i] << endl;
    }
    swap(arr);
    cout << "After swapping: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " element in the array: ";
        cout << arr[i] << endl; // Alternate method
    }
    return 0;
}
void swap(int *arr)
{
    int temp = arr[0];
    arr[0] = arr[5];
    arr[5] = temp;
    return; // To prevent the function from returning any value. This is optional.
}*/
/*Original Array:
1 element in the array: 1
2 element in the array: 2
3 element in the array: 3
4 element in the array: 4
5 element in the array: 5
6 element in the array: 6
After swapping:
1 element in the array: 6
2 element in the array: 2
3 element in the array: 3
4 element in the array: 4
5 element in the array: 5
6 element in the array: 1*/
#include <iostream>
using namespace std;
void swap(int *arr);
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout << "Original Array: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " element in the array: ";
        cout << arr[i] << endl;
    }
    swap(&arr[0]);
    cout << "After swapping: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << " element in the array: ";
        cout << arr[i] << endl; // Alternate method
    }
    return 0;
}
void swap(int *arr)
{
    int temp = arr[0];
    arr[0] = arr[5];
    arr[5] = temp;
    return; // To prevent the function from returning any value. This is optional.
}
/*Original Array:
1 element in the array: 1
2 element in the array: 2
3 element in the array: 3
4 element in the array: 4
5 element in the array: 5
6 element in the array: 6
After swapping:
1 element in the array: 6
2 element in the array: 2
3 element in the array: 3
4 element in the array: 4
5 element in the array: 5
6 element in the array: 1*/