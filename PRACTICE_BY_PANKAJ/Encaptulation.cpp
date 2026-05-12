#include<iostream>
#include<string.h>
using namespace std;
struct student 
{
    int age;
    char name[20];
    float marks;
    void PrintDetails()
    {
        cout << "Age : " << age << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
    void input()
    {
        cout << "Enter age name and marks : ";
        cin >> age;
        cin.ignore();
        cin.getline(name, 20);
        cin >> marks;
        if (marks<0)
        marks = 20;
    }
};
int main()
{
    student s = {12, "Aakash", 42.5};
    student s2;
    s2.age = 24;
    strcpy(s2.name, "Raj");
    s2.marks = -40;
    cout << "Emter age name and marks : ";
    student s3;
    cin >> s3.age;
    cin.ignore();
    cin.getline(s3.name, 20);
    cin >> s3.marks;
    student s4, s5;
    s4.input();
    s5.input();
    //PrintDetails(s); // ye nahi chaliga
    s.PrintDetails();
    s2.PrintDetails();
    s3.PrintDetails();
    s4.PrintDetails();
    s5.PrintDetails();
    return 0;
}