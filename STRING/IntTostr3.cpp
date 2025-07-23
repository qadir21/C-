#include <iostream>
#include <sstream>
using namespace std;
string intToString(int num) 
{
    ostringstream strStream;
    strStream << num;
    return strStream.str();
}
int main() 
{
    int number = 12345;
    string result = intToString(number);
    cout << "Converted String: " << result << endl;
    return 0;
}