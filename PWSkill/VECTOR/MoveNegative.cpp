#include<iostream>
#include<vector>
using namespace std;
void input(vector<int>&);
void display(vector<int>&);
void sortvector(vector<int>&);
int main()
{
    vector<int> v;
    cout << "Enter the element of array..................." << endl;
    input(v);
    cout << "---------------------------------------------" << endl;
    cout << "The entered element of array.................." << endl;
    display(v);
    sortvector(v);
    cout << "---------------------------------------------" << endl;
    cout << "After Sorted................................" << endl;
    display(v);
    return 0;
}
void input(vector<int>& v1)
{
    int n, i = 1;
    int ch = 1;
    while(ch != 0)
    {
        cout << "Enter Element " << i++ << " : ";
        cin >> n;
        v1.push_back(n);
        cout << "Press 0 to stop, otherwise press any number: ";
        cin >> ch;
    }
}
void display(vector<int>& v2)
{
    for(int i = 0; i < v2.size(); i++)
    {
        cout << "Element " << i + 1 << " : " << v2[i] << endl;
    }
}
void sortvector(vector<int>& v3)
{
    int i = 0;
    int j = v3.size() - 1;
    while(i < j)
    {
        if(v3[i] < 0) i++;
        else if(v3[j] > 0) j--;
        else 
        {
            int temp = v3[i];
            v3[i] = v3[j];
            v3[j] = temp;
            i++;
            j--;
        }
    }
}