#include<iostream>
using namespace std;
int main()
{
    string *ptr = new string;
    *ptr = "pankaj";
    cout << ptr << endl; // Adress
    cout << *ptr << endl; // content
    return 0;
}