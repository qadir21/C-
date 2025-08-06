#include<iostream>
using namespace std;
void print(int);
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    print(n);
    return 0;
}
void print(int a)
{
    if(a == 1)
    {
        cout << a << endl;
        return;
    }
    cout << a << endl;
    print(a - 1);
}