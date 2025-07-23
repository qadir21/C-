#include<iostream>
using namespace std;
void print_series(int , int);
int main()
{
    int f, l;
    cout << "Enter starting boundry: ";
    cin >> f;
    cout << "Enter Ending boundry: ";
    cin >> l;
    print_series(f,l);
    return 0;
}
void print_series(int a, int b)
{
    if (a == b)
    {
        cout << a << endl;
        return;
    }
    cout << a << endl;
    print_series(a - 1, b);
}