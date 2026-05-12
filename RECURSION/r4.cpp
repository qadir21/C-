#include<iostream>
using namespace std;
void printOdd(int, int);
void printEven(int, int);
int main()
{
    int s, e;
    cout << "Enter starting boundry: ";
    cin >> s;
    cout << "Enter ending boundry: ";
    cin >> e;
    cout << "Series in accesnding order:" << endl;
    cout << "Odd series " << endl;
    printOdd(s,e);
    cout << "Even Series " << endl;
    printEven(s,e);
    return 0;
}
void printEven(int i, int j)
{
    if( i % 2 != 0) ++i;
    if(i > j)
    {
        return;
    }
    cout << i << endl;
    printEven(i + 2, j);
}
void printOdd(int a , int b)
{
    if (a % 2 == 0) ++a;
    if(a > b)
    {
        return;
    }
    cout << a << endl;
    printOdd(a + 2, b);
}