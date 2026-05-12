#include<iostream>
using namespace std;
void swap(int[] = 0, int = 0);
void display(int [] = 0, int = 0);
void take_input(int [] = 0, int = 0, int = 0);
int main()
{
    int n;
    cout << "Enter size of arrray :";
    cin >> n;
    int arr[n];
    take_input(arr, n);
    swap(arr, n)
    display(arr, n);
    return 0;
}
void take_input(int x[], int y, int i)
{
    if (i == y) 
    {
        return;
    }
    cout << "Enter element " << i + 1 << " :";
    cin >> x[i];
    take_input(x , y, i + 1);
}
void swap(int a[], int s, int i)
{
    int temp;
    if (s== 0 || s == 1)
    {
        return ;
    }
    temp = a[0];
    a[0] = a[s- 1];
    a[s- 1] = temp;
    swap(a + 1, s -2);
}
void display(int a[], int s, int i)
{
    if (i == s)
    {
        return;
    }
    cout << a[i] << " ";
    display(a, s, i + 1);
}