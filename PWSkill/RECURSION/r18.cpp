#include <iostream>
using namespace std;
int gcd(int a, int b) {  
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    if (a > b) {
        return gcd(a - b, b); 
    } else {
        return gcd(a, b - a); 
    }
}
int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1 >> num2;
    int result = gcd(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}