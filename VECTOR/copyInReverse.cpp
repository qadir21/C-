#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int n;
        cout << "Element " << i + 1 << ": ";
        cin >> n;
        v1.push_back(n);
    }
    cout << "-------------------------------------------" << endl;
    cout << "Entered elements are....." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << " : " << v1[i] << endl;
    }
    v2.resize(size);
    for (int i = 0; i < v1.size(); i++)
    {
        v2[i] = v1[v1.size() - 1 - i];
    }
    cout << "Copied reverse array....." << endl;
    for (int k = 0; k < size; k++)
    {
        cout << "Element " << k + 1 << " : " << v2[k] << endl;
    }
    return 0;
}