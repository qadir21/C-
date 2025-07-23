#include<iostream>
using namespace std;
int main()
{
    float radius, height, volume;
    cout << "Enter the radius of the cylender: ";
    cin >> radius;
    cout << "Enter the height of the cylender: ";
    cin >> height;
    volume = 3.14 * radius * radius * height;
    cout << "The volume of the cylinder is: " << volume << endl;  // Print the volume of the cylinder.
    return 0;
}