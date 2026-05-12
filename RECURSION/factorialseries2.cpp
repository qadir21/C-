#include<iostream>
using namespace std;
void factorial(int n)
{
    int prod = 1;
    for(int j = 1; j <= n; j++)
    {
        prod *= j;
        cout << prod << endl;
    }
}
int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    factorial(num);
    return 0;
}