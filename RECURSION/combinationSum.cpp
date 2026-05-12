#include<iostream>
#include<vector>  // ✅ Required for using vector
using namespace std;

void Combination(vector<int>, int *, int, int, int);
void input(int *, int);
void print(int *, int);

int main()
{
    int size, target;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array........................." << endl;
    input(arr, size - 1);
    cout << "The entered elements of array..................." << endl;
    print(arr, size - 1);
    cout << "Enter target: ";
    cin >> target;
    vector<int> v;
    Combination(v, arr, size, target, 0);
    return 0;
}

void Combination(vector<int> v, int *a, int n, int target, int idx)
{
    if (target == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;   // ✅ For clarity
        return;         // ✅ Avoid further recursion
    }

    for (int i = idx; i < n; i++)
    {
        if (target - a[i] >= 0)    // ✅ Prevent negative target
        {
            v.push_back(a[i]);
            Combination(v, a, n, target - a[i], i);  // i, not i+1 because repeated allowed
            v.pop_back();
        }
    }
}

void input(int *a, int i)
{
    if (i < 0) return;
    input(a, i - 1);
    cout << "Enter element " << i + 1 << " : ";
    cin >> a[i];
}

void print(int *a, int i)
{
    if (i < 0) return;
    print(a, i - 1);
    cout << "Element " << i + 1 << " : " << a[i] << endl;
}