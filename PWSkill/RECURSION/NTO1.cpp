#include<iostream>
using namespace std;
void NTO1(int n)
{
    if(n < 1) return;
    cout << n << endl;
    NTO1(n - 1);
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    NTO1(num);
    return 0;
}