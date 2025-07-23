#include <iostream>
using namespace std;
string intToString(int num) 
{
    if (num == 0) return "0";  
    string result = "";
    bool isNegative = (num < 0);
    if (isNegative) num = -num;  
    while (num > 0) 
    {
        char digit = (num % 10) + '0';
        result = digit + result;  
        num /= 10;
    }
    if (isNegative) result = '-' + result;
    return result;
}
int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    string result = intToString(number);
    cout << "Converted String: " << result << endl;
    return 0;
}