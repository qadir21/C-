#include<iostream>
using namespace std;
int main()
{
    int n, count = 1;
    bool flag = false;
    vector<int> v;
    cout << "Enter Number: ";
    cin >> n;
    for(int i = 2; i * i <= n; i++)
    {
        count++;
    }
    for(int j = 2; j <= count; j++)
    {
        if(n % j != 0) v.push_back(j);
    }
    int x = 2;
    for(int k = 0; k <= count; k++)
    {
        if(v[k] % x  != 0) flag = true, x++;
        else break;
    }
    if(flag == true) cout << "Prime" << endl;
    else cout << "Not prime" << endl;
    return 0;
}