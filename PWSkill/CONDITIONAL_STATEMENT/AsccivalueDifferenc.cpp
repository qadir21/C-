#include<iostream>
using namespace std;
/*int main()
{
    char ch_1, ch_2;
    int diiference;
    cout << "Enter first characters: "; // Method --> 1
    cin >> ch_1 >> ch_2;
    diiference = abs(ch_1 - ch_2); // abs() function is used to get absolute value
    cout << "The difference in ASCII values of " << ch_1 << " and " << ch_2 << " is: " << diiference << endl;  // Print the difference in ASCII values.  // abs() function is used to get absolute value of difference between ASCII values.  // abs() function is used to get absolute value of difference between ASCII values.  // abs() function is used to get absolute value of difference between ASCII values.  // abs() functon
    return 0;
}*/
int main()
{
    char ch_1, ch_2, temp;
    int difference;
    cout << "Enter first characters: ";
    cin >> ch_1;
    cout << "Enter second characters: ";
    cin >> ch_2;
    difference = ch_1 - ch_2;
    if (difference < 0)
    {
        difference = difference * (-1);
    }
    cout << "The difference in ASCII values of " << ch_1 << " and " << ch_2 << " is: " << difference << endl;  // Print the difference in ASCII values.
    return 0;
}