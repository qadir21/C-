#include<iostream>
using namespace std;
void change2DVector(vector<vector<int> > &vx)
{
    vx[0][0] = 55;
}
void length(vector<vector<int> > &vn)
{
    cout << vn.size() << endl;
}
int main()
{
    vector<int> v1, v2, v3;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    vector<vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout << v[0][0] << endl;
    change2DVector(v);
    cout << v[0][0] << endl;
    length(v);
    cout << v[0].size() << endl;
    cout << v[1].size() << endl;
    cout << v[2].size() << endl;
    return 0;
}