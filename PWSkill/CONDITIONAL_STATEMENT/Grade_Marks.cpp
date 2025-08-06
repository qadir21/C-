#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 0 && marks <= 100)
    {
        if (marks > 90 && marks <= 100)
            cout << "Excellent" << endl;
        else if (marks > 80 && marks <= 90)
            cout << "Very good" << endl;
        else if (marks > 70 && marks <= 80)
            cout << "Good" << endl;
        else if (marks > 60 && marks <= 70)
            cout << "Can Do Better" << endl;
        else if (marks > 50 && marks <= 60)
            cout << "Average" << endl;
        else if (marks >= 40 && marks <=50)
            cout << "Below Average" << endl;
        else
        {
            cout << "Fail" << endl;
        }
    }
    else 
    {
        cout << "Invalid Marks. Please enter a number between 0 and 100." << endl;
    }
    return 0;
}