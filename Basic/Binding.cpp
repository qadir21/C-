#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
double add(double x, double y)
{
    return x + y;
}
int main()
{
    int r = 10,s = 20;
    double p = 2.3, q = 4.6;
    cout << "Sum of integers: " << add(r, s) <<endl;
    cout << "Sum of doubles: " << add(p, q) <<endl;
    return 0;
}