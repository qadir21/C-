#include<iostream>
using namespace std;
void printEven(int);
void printOdd(int);
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "descending  series\nEven.." << endl;
    printEven(n);
    cout << "Desecending series\nOdd..." << endl;
    printOdd(n);
    return 0;
}
void printOdd(int a)
{
    if(a < 1) return;
    if(a % 2 == 0) --a;
    cout << a << endl;
    printOdd(a-2);
}
void printEven(int b)
{
    if(b < 2) return;
    if(b % 2 != 0) --b;
    cout << b << endl;
    printEven(b - 2);
}