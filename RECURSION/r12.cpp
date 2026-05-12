#include<iostream> 
using namespace std;
int pf(int,int);
int main()
{
    int power , base;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;
    cout << base << " rasised to the " << power << " : " << pf( base, power) << endl;
    return 0;
}
int pf(int a, int b)
{
    if( b == 0) return 1;
    return a * pf(a , b - 1);
}