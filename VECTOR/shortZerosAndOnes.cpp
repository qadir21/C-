#include<iostream>
using namespace std;
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
    sort(v.begin(), v.end());
    cout << "After sorting ....." << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << "Element " << i + 1 << " : " << v[i] << endl;
    }
    return 0;
}