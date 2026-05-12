#include<iostream>
using namespace std;
int main()
{
    int size, element, index;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }
    for (int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": " << arr[i] << endl;
    }
    cout << "Enter the element you wnat to search: ";
    cin >> element;
    bool flag = false;
    for (int i=0; i<size; i++)
    {
        if (arr[i] == element)
        {
            index = i;
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Element found at index " << index <<"." << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}