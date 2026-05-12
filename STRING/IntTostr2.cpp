#include <iostream>
#include <cstdio>
using namespace std;
string intToString(int num) 
{
    char buffer[20];  
    sprintf(buffer, "%d", num);
    return string(buffer);
}
int main() {
    int number = 6789;
    string result = intToString(number);
    cout << "Converted String: " << result << endl;
    return 0;
}