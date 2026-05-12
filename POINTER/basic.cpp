#include<iostream>
using namespace std;
int main()
{
    int x, y;
    int *p = &x, *q = &y;
    cout << &x << endl;
    return 0; 
}