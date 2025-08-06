#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int size, target;
    cout << "Enter size of vector: ";
    cin >> size;
    cout << "Enter Target: ";
    cin >> target;
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
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == target)
            {
                cout << "The element sum at index (" << i << ", " << j << ") is: " << target << endl;
            }
        }
    }
    return 0;
}
