#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "91011";
    int num;
    stringstream ss(str);
    ss >> num;
    cout << "Integer: " << num << endl;
    return 0;
}