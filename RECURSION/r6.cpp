#include<iostream>
using namespace std;
void printEven(int);
void printOdd(int);
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "Asecnding series\nEven.." << endl;
    printEven(n);
    cout << "Ascending series\nOdd." << endl;
    printOdd(n);
    return 0;
}
void printOdd(int a)
{
    if(a < 1) return;
    if(a % 2 == 0) --a;
    printOdd(a-2);
    cout << a << endl;
}
void printEven(int b)
{
    if(b < 2) return;
    if(b % 2 != 0) --b;
    printEven(b - 2);
    cout << b << endl;
}