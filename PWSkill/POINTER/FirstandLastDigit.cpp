#include<iostream>
using namespace std;

void find(int, int*, int*);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int first_digit, last_digit;
    int *ptr_1 = &first_digit, *ptr_2 = &last_digit;
    find(n,ptr_1,ptr_2);
    cout << "First digit: " << first_digit << endl;
    cout << "Last digit: " << last_digit << endl;
    return 0;
}

void find(int a, int *b, int *c)
{
    *c = a % 10;
    while(a > 9)
    {
        a /= 10;
    }
    *b = a;
    return;
}