#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int>&, vector<int>&);
int main() {
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for (int i = 0; i < arr1.size(); i++) 
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for (int i = 0; i < arr2.size(); i++) 
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    vector<int> v = merge(arr1, arr2);
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
vector<int> merge(vector<int>& v1, vector<int>& v2) 
{
    vector<int> vr(v1.size() + v2.size());
    int i = 0, j = 0, k = 0;

    while (i < v1.size() && j < v2.size()) 
    {
        if (v1[i] < v2[j]) 
        {
            vr[k++] = v1[i++];
        } 
        else 
        {
            vr[k++] = v2[j++];
        }
    }
    while (i < v1.size()) 
    {
        vr[k++] = v1[i++];
    }
    while (j < v2.size()) 
    {
        vr[k++] = v2[j++];
    }
    return vr;
}