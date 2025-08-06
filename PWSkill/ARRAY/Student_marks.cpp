#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the number of students: ";
    cin >> size;
    int marks_of_students[size];
    cout << "Enter the marks of each student:\n";
    for(int i=0; i<size; i++)
    {
        cout << "Student " << i+1 << ": ";  // Student 1, Student 2, etc.
        cin >> marks_of_students[i];
    }
    for (int i=0; i<size; i++)
    {
        cout << "Student " << i+1 << " got " << marks_of_students[i] << " marks." << endl;
    }
    for (int i=0; i<size; i++)
    {
        if (marks_of_students[i] < 35)
        {
            cout << "Student " << i+1 << " has marks less than 35." <<  endl;
        }
    }
    return 0;
}