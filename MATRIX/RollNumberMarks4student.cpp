#include<iostream>
using namespace std;
int main()
{
    int s, x = 1;
    cout << "Enter number of student: ";
    cin >> s;
    int student[2][s];
    for(int i = 0; i < 2; i++)
    {

        for(int j = 0; j < s; j++)
        {
            if(x <= s)
            {
                cout << "Enter roll number of " << j + 1  << " student " << " : ";
                cin >> student[i][j];
                x++;
            }
            else
            {
                cout << "Enter marks of " << j + 1  << " student " << " : ";
                cin >> student[i][j];
            }
        }
    }
    cout << "Details are........................................." << endl;
    x = 1;
    for(int i = 0; i < 2; i++)
    {

        for(int j = 0; j < s; j++)
        {
            if(x <= s)
            {
                cout << "Roll number of " << j + 1  << " student " << " : " << student[i][j] << endl;;
                x++;
            }
            else
            {
                cout << "Marks of " << j + 1  << " student " << " : " << student[i][j] << endl;
                
            }
        }
    }
}