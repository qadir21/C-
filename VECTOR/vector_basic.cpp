/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;
    return 0;
}*/
/*1
2
3
4
5*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(1);
    cout << vec.capacity() << endl;
    vec.push_back(2);
    cout << vec.capacity() << endl;
    vec.push_back(3);
    cout << vec.capacity() << endl;
    vec.push_back(4);
    cout << vec.capacity() << endl;
    vec.push_back(5);
    cout << vec.capacity() << endl;
    cout << "The vector :" << endl;
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;
    return 0;
}