#include<iostream>
using namespace std;
int Stair(int n)
{
    if(n == 1 || n == 2) return n;
    return Stair(n -1) + Stair(n - 2);
}
int main()
{
    int stair;
    cout << "Enter the number of stair: ";
    cin >> stair;
    cout << Stair(stair) << endl;
    return 0;
}
