#include<iostream>
using namespace std;
int SeriesSum(int n)
{
    if(n < 1) return 0;
    return n + SeriesSum(n - 1);
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << SeriesSum(num) << endl;
    return 0;
}