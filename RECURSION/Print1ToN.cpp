#include<iostream>
using namespace std;
void OneToN(int n)
{
    if(n < 1) return;
    OneToN(n - 1);
    cout << n << endl;
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    OneToN(num);
    return 0;
}
