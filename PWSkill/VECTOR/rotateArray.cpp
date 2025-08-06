#include<iostream>
using namespace std;
void display(int, vector<int>&);
void reversePart(int , int, vector<int>&);
void rotate(int, int, vector<int>&);
int main()
{
    int size, k;
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
    cout << "Enter Rotation number: " ;
    cin >> k;
    rotate(size, k, v);
    cout << "---------------------------------" << endl;
    cout << "After Rotaion............." << endl;
    display(size,v);
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
void rotate(int p,int q, vector<int> &r)
{
    if(p > q) p = p - q;
    reversePart(0, p - q- 1,r);
    reversePart(p - q, p - 1,r);
    reversePart(0, p - 1,r);
}