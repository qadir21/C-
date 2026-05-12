#include<iostream>
using namespace std;
void swap(int* , int* );
int main()
{
    int a, b;
    cout << "Enter First number: ";
    cin >> a;
    cout << "Enter Second number: ";
    cin >> b;
    cout << "Number Before swaping: " << a << ", " << b << endl;
    swap(&a, &b);  // Function call to swap numbers
    cout << "Number After swaping in main: " << a << ", " << b << endl;  // Displaying the swapped numbers
    return 0;
} 
void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "After swapping: " << *x << ", " << *y << endl;
    return;
}