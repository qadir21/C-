#include<iostream>
#include<string.h>
using namespace std;
struct student 
{
    int age;
    char name[20];
    float marks;
};
void PrintDetails(struct student);
struct student input();
int main()
{
    struct student s = {12, "Aakash", 42.5};
    struct student s2;
    s2.age = 24;
    strcpy(s2.name, "Raj");
    s2.marks = 56.3;
    cout << "Emter age name and marks : ";
    struct student s3;
    cin >> s3.age;
    cin.ignore();
    cin.getline(s3.name, 20);
    cin >> s3.marks;
    struct student s4, s5;
    s4 = input();
    s5 = input();
    PrintDetails(s);
    PrintDetails(s2);
    PrintDetails(s3);
    PrintDetails(s4);
    PrintDetails(s5);
    return 0;
}
void PrintDetails(struct student s)
{
    cout << "Age : " << s.age << endl;
    cout << "Name : " << s.name << endl;
    cout << "Marks : " << s.marks << endl;
}
struct student input()
{
    struct student s;
    cout << "Enter age name and marks : ";
    cin >> s.age;
    cin.ignore();
    cin.getline(s.name, 20);
    cin >> s.marks;
    return s;
}