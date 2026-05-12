#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size, element, x;
    vector<int> v;
    cout << "Enter size of vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        v.push_back(num);
    }
    cout << "--------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << v[i] << endl;
    }
    cout << "Enter the element you want to find: ";
    cin >> element;
    for (int i = size -1; i >= 0; i--)
    {
        if (v[i] == element)
        {
            x = i;
            break;
        }
    }
    cout << "The last occurence of finding elements is " << x << " index " << endl;
    return 0;
}