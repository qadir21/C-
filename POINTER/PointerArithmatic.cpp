#include<iostream>
using namespace std;
int main()
{
    int x[] = {7, 5, 8, 9};
    int *ptr = x;
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    ptr++;
    cout << *ptr << endl;
    return 0;
}