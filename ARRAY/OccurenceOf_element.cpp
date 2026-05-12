#include<iostream>
using namespace std;
int main()
{
    int size, count = 0, element;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:\n";
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "The entered elements are: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << "Element " << i+1 << ": ";
        cout << arr[i] << endl;
    }
    cout << "Enter the element to find its frequency: ";
    cin >> element;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            count++;
    }
    cout << "The frequency of " << element << " is: " << count << endl;
    return 0;
}