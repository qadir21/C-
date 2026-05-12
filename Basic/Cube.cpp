#include<iostream>
using namespace std;
int n, result = 0;
int main()
{
    int n, result = 0;
    cout << "Enter a number: ";
    cin >> n;
    result = n*n*n;
    cout << "Cube of "<<n<<" is "<< result << endl;
    return 0;
}