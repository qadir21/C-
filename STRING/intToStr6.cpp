#include <iostream>
#include <format>
using namespace std;
int main() {
    int num = 456;
    string str = format("{}", num);
    cout << "Converted String: " << str << endl;
    return 0;
}