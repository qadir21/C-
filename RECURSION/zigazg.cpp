#include<iostream>
using namespace std;
void Zigzag(int n)
{
    if(n == 0) return;
    cout << n << endl;
    Zigzag(n - 1);
    cout << n << endl;
    Zigzag(n - 1);
    cout << n << endl;

}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    return 0;
}