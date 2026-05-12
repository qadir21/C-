#include<iostream>
using namespace std;
int main ()
{
    float radius, area;
    cout << "Enter Radius of the Circle: ";
    cin >> radius;
    area = 3.14159 * radius * radius;
    cout << "Area of the Circle: " << area << endl;
    return 0;
}