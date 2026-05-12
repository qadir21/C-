#include<iostream>
using namespace std;
void sort01(vector<int>&);
int main()
{
    vector<int> v;
    int i = 1;
    while(1)
    { int choice;
        int n;
        cout << "Enter elemnt " << i++ << " : ";
        cin >> n;
        v.push_back(n);
        cout << "Press 0 for stop otherwise press any key for next element: ";
        cin >> choice;
        if(choice == 0) break;
    }
    cout << "Enterd element........" << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << "Element " << i + 1 << " : " << v[i] << endl;
    }
    sort01(v);
    cout << "After sorting ....." << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << "Element " << i + 1 << " : " << v[i] << endl;
    }
    return 0;
}
void sort01(vector<int>&a)
{
    int n = a.size(), n0 = 0, n1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)  n0++;
        else n1++;
    }
    for(int i = 0; i < n; i++)
    {
        if(i < n0) a[i] = 0;
        else a[i] = 1;
    }
}