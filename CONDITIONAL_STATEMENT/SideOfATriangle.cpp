#include<iostream>
using namespace std;
int main()
{
    int side_1, side_2, side_3;
    cout << "Enter First Side: ";
    cin >> side_1;
    cout << "Enter Second Side: ";
    cin >> side_2;
    cout << "Enter Third Side: ";
    cin >> side_3;
    if (side_1 + side_2 > side_3 && side_1 + side_3 > side_2 && side_2 + side_3 > side_1)
    {
        cout << "The given sides form a valid triangle." << endl;
        if (side_1 == side_2 && side_2 == side_3)
            cout << "The triangle is equilateral." << endl;
        else if (side_1 == side_2 || side_1 == side_3 || side_2 == side_3)
            cout << "The triangle is isosceles." << endl;
        else
            cout << "The triangle is scalene." << endl;
    }
    else
    {
        cout << "The given sides do not form a valid triangle." << endl;
    }
    return 0;
}