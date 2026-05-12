#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 91)
    {
        cout << "Excellent" << endl;
    }
    else 
    {
        if (marks >= 81)
        {
            cout << " Very Good" << endl;
        }
        else
        {
            if (marks >= 71)
            {
                cout << "Good" << endl;
            }
            else
            {
                if (marks >= 61)
                {
                    cout << "Can Do Better" << endl;
                }
                else 
                    {
                    if (marks >= 51)
                    {
                        cout << "Average" << endl;
                    }
                    else
                    {
                        if (marks >= 41)
                        {
                            cout << "Below Average" << endl;
                        }
                        else
                        {
                            cout << "Fail" << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}