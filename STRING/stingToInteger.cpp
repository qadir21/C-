#include<iostream>
using namespace std;
int stringToInt(string str) 
{
    int num = 0, i = 0, sign = 1;
    if (str[0] == '-') { 
        sign = -1;  
        i = 1;
    }
    while (i < str.length()) {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return sign * num;
}
int main() {
    string str;
    cout << "Enter a number: ";
    cin >> str;
    int num = stringToInt(str);
    cout << "Converted Integer: " << num << endl;
    return 0;
}