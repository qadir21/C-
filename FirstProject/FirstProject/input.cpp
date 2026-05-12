//
//  input.cpp
//  FirstProject
//
//  Created by Abdul Qadir on 17/06/25.
//
#include<iostream>
using namespace std;
void sum()
{
    int a, summ = 0;
    char ch = 1;
    while(ch != '=')
    {
        cin >> a;
        summ += a;
        cin >> ch;
    }
    cout << "Total sum: " << summ << endl;
}
