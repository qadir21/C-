#include<iostream>
using namespace std;

int main()
{
    int s;
    cout << "Enter number of students: ";
    cin >> s;

    // Dynamically allocate memory for the 2D array
    int **student = new int*[2];
    for(int i = 0; i < 2; i++) 
    {
        student[i] = new int[s]; // 2 rows: one for roll numbers, one for marks
    }

    // Input roll numbers and marks
    for(int j = 0; j < s; j++)
    {
        cout << "Enter roll number of student " << j + 1 << ": ";
        cin >> student[0][j]; // Roll number stored in the first row

        cout << "Enter marks of student " << j + 1 << ": ";
        cin >> student[1][j]; // Marks stored in the second row
    }

    // Display the data
    cout << "\nDetails are........................................." << endl;
    for(int j = 0; j < s; j++)
    {
        cout << "Roll number of student " << j + 1 << ": " << student[0][j] << endl;
        cout << "Marks of student " << j + 1 << ": " << student[1][j] << endl;
    }

    // Free the allocated memory
    for(int i = 0; i < 2; i++) 
    {
        delete[] student[i];
    }
    delete[] student;

    return 0;
}