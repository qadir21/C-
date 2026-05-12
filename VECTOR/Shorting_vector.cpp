#include<iostream>
#include<vector>
#include<algorithm> // for sort() function
#include<cstdlib> // for rand() function
#include<ctime> // for time() function
#include<iomanip> // for setprecision() function
#include<cmath> // for pow() function
using namespace std;
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
    sort(v.begin(), v.end());
    cout << "--------------------------------" << endl;
    cout << "Sorted vector in ascending order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The " << i + 1 << " element of the vector: " << v[i] << endl;
    }
    return 0;
}