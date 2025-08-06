#include <iostream>
#include <vector>
using namespace std;
void output(vector<int>&);
void input(vector<int>&);
int main()
{
    vector<int> v1;
    cout << "Enter element of array....................." << endl;
    input(v1);
    cout << "The entered element of array are..........." << endl;
    output(v1);
    return 0;
}
void input(vector<int> &a1)
{
    int choice = 1, i = 1;
    while(choice)
    {
        int n;
        cout << "Enter "  << i << " Element " << " : ";
        cin >> n;
        a1.push_back(n);
        cout << "Press 0 for exit otherwise press any key ";
        cin >> choice;
    }
}
void output(vector<int> &a2)
{
    int j = 0;
    while(j < a2.size())
    {
        cout << "Element " << j + 1 << " : " << a2[j] << endl;
        j++;
    }
}