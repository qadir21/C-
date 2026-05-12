#include<iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter the month number: ";
    cin >> month;
    // 1 3 5 7 8 10  12 --> 31
    //  4 6 9 11 --> 30
    // 2 --> 28
    switch (month <= 7 && month %2!=0)
    {
        case 1:
        cout << "31 Days" << endl; 
    }
    switch (month >=8 && month % 2 == 0)
    {
        case 1:
        cout << "31 Days" << endl;
    }
    switch(month == 4 || month == 6 || month == 9 || month == 11)
    {
        case 1:
        cout << "30 Days" << endl;
    }
    switch (month)
    {
        case 2:
        cout << "28 days" << endl;
    }
    return 0;
}