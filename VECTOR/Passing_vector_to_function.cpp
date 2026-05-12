/*#include<iostream>
using namespace std;
void change(vector<int>);
int main()
{
    vector<int> v;
    int size;
    cout << "Enter size of vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        v.push_back(num);
    }
    cout << "--------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << v[i] << endl;
    }
    change(v);
    cout << "--------------------------------" << endl;
    cout << "After changing the first element: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << v[i] << endl;
    }
    return 0;
}
void change(vector<int> x)
{
    x[0] = 10;
    cout << "Inside change function: " << endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << x[i] << endl;
    }
}*/
/*Enter size of vector: 5
Enter element 1: 2
Enter element 2: 8
Enter element 3: 4
Enter element 4: 3
Enter element 5: 6
--------------------------------
The 1 element of the vector: 2
The 2 element of the vector: 8
The 3 element of the vector: 4
The 4 element of the vector: 3
The 5 element of the vector: 6
Inside change function:
The 1 element of the vector: 10 // pass by value
The 2 element of the vector: 8
The 3 element of the vector: 4
The 4 element of the vector: 3
The 5 element of the vector: 6
--------------------------------
After changing the first element:
The 1 element of the vector: 2
The 2 element of the vector: 8
The 3 element of the vector: 4
The 4 element of the vector: 3
The 5 element of the vector: 6*/
#include <iostream>
using namespace std;
void change(vector<int>&);
int main()
{
    vector<int> v;
    int size;
    cout << "Enter size of vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        v.push_back(num);
    }
    cout << "--------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << v[i] << endl;
    }
    change(v);
    cout << "--------------------------------" << endl;
    cout << "After changing the first element: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << v[i] << endl;
    }
    return 0;
}
void change(vector<int>& x)
{
    x[0] = 10;
    cout << "Inside change function: " << endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << x[i] << endl;
    }
}
/*Enter size of vector: 5
Enter element 1: 2
Enter element 2: 8
Enter element 3: 4
Enter element 4: 9
Enter element 5: 3
--------------------------------
The 1 element of the vector: 2
The 2 element of the vector: 8
The 3 element of the vector: 4
The 4 element of the vector: 9
The 5 element of the vector: 3
Inside change function:
The 1 element of the vector: 10
The 2 element of the vector: 8
The 3 element of the vector: 4
The 4 element of the vector: 9
The 5 element of the vector: 3
--------------------------------
After changing the first element:  // pass by address
The 1 element of the vector: 10
The 2 element of the vector: 8
The 3 element of the vector: 4
The 4 element of the vector: 9
The 5 element of the vector: 3*/