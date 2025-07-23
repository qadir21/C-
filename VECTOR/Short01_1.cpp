#include<iostream>
using namespace std;
void input(vector<int>&);
void display(vector<int>&);
void sort01method2(vector<int>&);
int main()
{
    vector<int> v;
    cout << "Enter the element of array..................." << endl;
    input(v);
    cout << "---------------------------------------------" << endl;
    cout << "The enterd element of array.................." << endl;
    display(v);
    sort01method2(v);
    cout << "---------------------------------------------" << endl;
    cout << "After Shorted................................" << endl;
    display(v);
    return 0;
}
void input(vector<int>&v1)
{
    int n, i = 1, ch;
    while(ch)
    {
        cout << "Enter Element " << i++ << " : ";
        cin >> n;
        v1.push_back(n);
        cout << "Press 0  for stop otherwise press any key: ";
        cin >> ch;
    }
}
void display(vector<int>&v2)
{
    for(int i = 0; i < v2.size(); i++)
    {
        cout << "Element " << i + 1 << " : " << v2[i] << endl;
    }
}
void sort01method2(vector<int>&v3)
{
    int i = 0;
    int j = v3.size() - 1;
    while(i < j)
    {
        if(v3[i] == 0) i++;
        if(v3[j] == 1) j--;
        if(i > j) break;
        if(v3[i] == 1 && v3[j] == 0) v3[i] = 0, v3[j] = 1,  i++, j--;
    }
}