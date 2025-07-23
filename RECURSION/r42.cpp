#include<iostream>
using namespace std;
void input(int*, int);
void output(int*, int);
int subset(int*, int, int, int);
int main()
{
    int size, sum;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter Element of array................" << endl;
    input(arr, size - 1);
    cout << "--------------------------------------" << endl;
    cout << "The enterd element are................" << endl;
    output(arr, size - 1); 
    cout << "-------------------------------------" << endl;
    cout << "Enter perfect sum: ";
    cin >> sum;
    cout << "The sum " << sum << " occure at " << subset(arr, 0, sum, size) << " times." << endl;
    return 0;
}
void input(int *a, int i)
{
    if(i < 0) return;
    input(a, i - 1);
    cout << "Enter element " << i + 1 << " : ";
    cin >> a[i];
}
void output(int *b, int j)
{
    if(j < 0) return;
    output(b, j - 1);
    cout << "Element " << j + 1 << " : " << b[j] << endl;
}
int subset(int *c, int k, int sum, int n)
{
    if(sum == 0) return  1;
    if(sum < 0 || k == n) return 0;
    return subset(c,k + 1, sum ,n) + subset(c, k + 1, sum-c[k], n);
}