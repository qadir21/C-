#include<iostream>
using namespace std;
void input(int*, int);
void display(int*, int);
void merge(int*, int*, int*, int);
int main()
{
    int sa1, sa2;
    cout << "Enter size Of first array: ";
    cin >> sa1;
    cout << "Enter size Of second array: ";
    cin >> sa2;
    int arr1[sa1], arr2[sa2], arr3[sa1 + sa2];
    cout << "Enter element of first array......................" << endl;
    input(arr1, sa1);
    cout << "Enter element of second array......................" << endl;
    input(arr2, sa2);
    cout << "First array Element................................" << endl;
    display(arr1, sa1);
    cout << "Second array Element................................" << endl;
    display(arr2, sa2);
    merge(arr1, arr2, arr3, sa1 + sa2);
    cout << "Array before sorting............................... " << endl;
    display(arr3, sa1 + sa2);
    return 0;
}
void input(int * a, int s)
{
    for(int i = 0; i < s; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        cin >> a[i];
    }
}
void display(int *ar, int s2)
{
    for(int i = 0; i < s2; i++)
    {
        cout << "Element " << i + 1 << " : " << ar[i]  << endl;
    }
}
void merge(int *a1, int *a2, int *a3, int s3) 
{
    int i = 0, j = 0, k = 0;
    
}