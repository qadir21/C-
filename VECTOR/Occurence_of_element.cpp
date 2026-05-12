#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size, count = 0, element;
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
    cout << "Enter the element you wnwt to find: ";
    cin >> element;
    for (int i = 0; i < size; i++)
    {
        if (v[i] == element)
        {
            count++;
        }
    }
    cout << "The element " << element << " appears " << count << " times in the vector." << endl;
    return 0;
}