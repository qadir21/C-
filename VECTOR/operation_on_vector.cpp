/*#include<iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << v[i] << endl;
    }
    cout << "--------------------------------"<< endl;
    v.pop_back();
    cout << "After popping the last element: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << v[i] << endl;
    }
    return 0;
}*/
/*The 1 element of the vector: 1
The 2 element of the vector: 2
The 3 element of the vector: 3
The 4 element of the vector: 4
The 5 element of the vector: 5
--------------------------------
After popping the last element:
The 1 element of the vector: 1
The 2 element of the vector: 2
The 3 element of the vector: 3
The 4 element of the vector: 4*/
/*#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1); // 1 1 
    v.push_back(2); // 2 2
    v.push_back(3); // 3 4
    v.push_back(4); // 4 4
    v.push_back(5); // 5 8
    v.push_back(6); // 6 8
    v.push_back(7); // 7 8
    v.push_back(8); // 8 8
    v.push_back(9); // 9 16
    v.push_back(10); // 10 16
    cout << "The size is: " << v.size() << endl;
    cout << "The capacity is: " << v.capacity() << endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "The size is: " << v.size() << endl;
    cout << "The capacity is: " << v.capacity() << endl;
    return 0;
}*/
/*The size is: 10
The capacity is: 16
The size is: 3
The capacity is: 16*/
