#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    // Condition ? True : False
    n % 2 ==0 ? cout << "Number " << n << " is even" << endl :  cout << "Number " << n << " is odd" << endl;
    return 0;
}