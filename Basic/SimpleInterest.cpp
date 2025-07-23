#include<iostream>
using namespace std; // alternate std :: in every input output stream
int main()
{
    float principal, time, rate, SimpleInterest;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time in years: ";
    cin >> time;
    cout << "Enter the annual interest rate: ";
    cin >> rate;
    // Calculate simple interest
    SimpleInterest = (principal * time * rate) / 100;
    // Display the simple interest
    cout << "Simple Interest: " << SimpleInterest << endl;
    return 0;
}