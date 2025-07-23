#include<iostream>
using namespace std;
void display(int, vector<int>&);
void reversePart(int , int, vector<int>&);
int main()
{
    int size, f, l;
    vector<int> v;
    cout << "Enter size of array:";
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        int n;
        cout << "Element " << i + 1 << " : ";
        cin >> n;
        v.push_back(n);
    }
    cout << "---------------------------------" << endl;
    cout << "Enterd element are .................." << endl;
    display(size,v);
    cout << "Enter the first index of array:";
    cin >> f;
    cout << "Enter the last index ofd array:";
    cin >> l;
    reversePart(f, l, v);
    cout << "----------------------------------------" << endl;
    cout << "After reversing array are..........." << endl;
    display(size,v);
    return 0;
}
void display(int x, vector<int> &y)
{
    for(int i = 0; i < x; i++)
    {
        cout << "Element " << i + 1 << " : " << y[i] << endl;
    }
}
void reversePart(int a, int b, vector<int> &c)
{
    while(a <= b)
    {
        int temp = c[a];
        c[a] = c[b];
        c[b] = temp;
        a++,b--;
    }
}