#include <iostream>
#include <sstream>
using namespace std;
int main() 
{
    int num = 6789;
    stringstream ss;
    ss << num;
    string str = ss.str();
    cout << "Converted String: " << str << endl;
    return 0;
}