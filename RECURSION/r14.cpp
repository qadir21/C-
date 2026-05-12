#include<iostream>
using namespace std;
int possible_option(int);
int main()
{
    int n;
    cout << "Enter stair: ";
    cin >> n;
    cout << "For climbing of " << n << " stair the possible option are: " << possible_option(n) << endl;
    return 0;
}
int possible_option(int a)
{
    if( a == 0 || a == 1) return a;
    if(a == 2) return a;
    return possible_option(a - 1) + possible_option(a - 2);
}