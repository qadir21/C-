#include<iostream>
using namespace std;
void factorial(int n)
{
    for(int i = 1; i <= n; i++)
    {
        int prod = 1;
        for(int j = 1; j <= i; j++)
        {
            prod *= j;
        }
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