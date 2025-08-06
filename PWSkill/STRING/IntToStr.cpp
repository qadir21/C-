#include <iostream>
using namespace std;
string intToString(int num) 
{
    if (num == 0) return "";  
    char digit = (abs(num % 10)) + '0';
    return intToString(num / 10) + digit;  
}
int main() 
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (number == 0) cout << "0" << endl;
    else 
    {
        string result = intToString(abs(number));
        if (number < 0) result = "-" + result;
        cout << "Converted String: " << result << endl;
    }
    return 0;
}