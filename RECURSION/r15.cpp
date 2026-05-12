#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter stair: ";
    cin >> n;
    if (n == 1) 
    {
        cout << "The possible option for climbing " << n << " stair: 1" << endl;
        return 0;
    } else if (n == 2) 
    {
        cout << "The possible option for climbing " << n << " stairs: 2" << endl;
        return 0;
    }
    int prev2 = 1; // Option for 1 stair
    int prev1 = 2; // Option for 2 stairs
    int current = 0;
    for (int i = 3; i <= n; i++) 
    {
        current = prev1 + prev2; // Fibonacci relation
        prev2 = prev1;
        prev1 = current;
    }
    cout << "The possible option for climbing " << n << " stairs: " << current << endl;
    return 0;
}