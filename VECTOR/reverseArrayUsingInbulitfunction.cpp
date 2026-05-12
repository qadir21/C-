#include<iostream>
using namespace std;
int main()
{
    int size;
    vector<int> v;
    cout << "Enter the size of array:";
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        int n;
        cout << "Element " << i + 1 << ":";
        cin >> n;
        v.push_back(n);
    }
    cout << "--------------------" << endl;
    cout << "Enter array are....." << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << " : " << v[i] << endl;
    }
    reverse(v.begin(), v.end());
    cout << "After reversing array are......." << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << " : " << v[i] << endl;
    }
    return 0;
}