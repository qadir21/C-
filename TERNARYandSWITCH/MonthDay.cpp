#include<iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter month: ";
    cin >> month;
    switch (month)
    {
        case 1 : // January
        cout << "31 days" << endl; break;
        case 2 : // February
        cout << "28 days" << endl; break;
        case 3 : // March
        cout << "31 days" << endl; break;
        case 4 : // April
        cout << "30 days" << endl; break;
        case 5 : // May
        cout << "31 days" << endl; break;
        case 6 : // June
        cout << "30 days" << endl; break;
        case 7 : // July
        cout << "31 days" << endl; break;
        case 8 : // August
        cout << "31 days" << endl; break;
        case 9 : // September
        cout << "30 days" << endl; break;
        case 10 : // October
        cout << "31 days" << endl; break;
        case 11: // November
        cout << "30 days" << endl; break;
        case 12: // December
        cout << "31 days" << endl; break;
        default:
        cout << "Invalid month" << endl;
    }
    return 0;
}