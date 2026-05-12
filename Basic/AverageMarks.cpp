#include<iostream>
using namespace std;
int main()
{
    float maths_marks, chemistry_marks, physics_marks, english_marks, hindi_marks;
    cout << "Enter Marks of Chemistry subject: ";
    cin >> chemistry_marks;
    cout << "Enter Marks of Mathematics subject: ";
    cin >> maths_marks;
    cout << "Enter Marks of Physics subject: ";
    cin >> physics_marks;
    cout << "Enter Marks of English subject: ";
    cin >> english_marks;
    cout << "Enter Marks of Hindi subject: ";
    cin >> hindi_marks;
    float total_marks = maths_marks + chemistry_marks + physics_marks + english_marks + hindi_marks;
    float average_marks = total_marks / 5;
    cout << "Average marks in all subjects: " << average_marks << endl;
    return 0;
}