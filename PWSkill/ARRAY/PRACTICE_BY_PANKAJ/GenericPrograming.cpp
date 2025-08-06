/*#include<iostream>
using namespace std;
template <typename X>
X abso(X n)
{
    return (n >= 0)? n : -n;
}
int main()
{
    int int1 = 5;
    int int2 = -6;
    long l1 = 700L;
    long l2 = -800L;
    double d1 = 8.5;
    double d2 = -111.35;
    cout << "\n" << "absol(" << int1 << ") --> " << abso(int1) << endl;
    cout << "absol(" << int2 << ") --> " << abso(int2) << endl;
    cout << "absol(" << l1 << ") --> " << abso(l1) << endl;
    cout << "absol(" << l2 << ") --> " << abso(l2) << endl;
    cout << "absol(" << d1 << ") --> " << abso(d1) << endl;
    cout << "absol(" << d2 << ") --> " << abso(d2) << endl;
}*/
/*absol(5) --> 5
absol(-6) --> 6
absol(700) --> 700
absol(-800) --> 800
absol(8.5) --> 8.5
absol(-111.35) --> 111.35*/
#include <iostream>
using namespace std;
template <typename X>
X abso(X n)
{
    return (n >= 0) ? n : -n;
}
int main()
{
    int int1 = 5;
    int int2 = -6;
    long l1 = 700L;
    long l2 = -800L;
    double d1 = 8.5;
    double d2 = -111.35;
    cout << "\n" << "absol(" << int1 << ") --> " << abso(int1) << endl;
    cout << "absol(" << int2 << ") --> " << abso(int2) << endl;
    cout << "absol(" << l1 << ") --> " << abso(l1) << endl;
    cout << "absol(" << l2 << ") --> " << abso(l2) << endl;
    cout << "absol(" << d1 << ") --> " << abso(d1) << endl;
    cout << "absol(" << d2 << ") --> " << abso(d2) << endl;
}