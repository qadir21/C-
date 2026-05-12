#include<iostream>
#include<string.h>
using namespace std;
struct student 
{
private:
    int age;
    char name[20];
    float marks;
public:
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
    }
};
int main()
{
    student s4, s5;
    s4.input();
    s5.input();
    s4.PrintDetails();
    s5.PrintDetails();
    return 0;
}